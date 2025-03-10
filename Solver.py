import cv2
import kociemba

# Start camera
vid = cv2.VideoCapture(0)

# Create empty list1
rubik = []
core = []

for i in range(6):
    while 1:
        # Read camera
        ret, frame = vid.read()

        # Convert frame from BGR to HSV
        hsv_frame = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

        # Draw rectangle on captured image
        cv2.rectangle(frame, (100, 100), (400, 400), (0, 255, 0), 2)

        # Show images
        cv2.imshow("camera", frame)

        # Break by pressing "z" (not "Z")
        if cv2.waitKey(10) == ord('z'):
            # Get color from 9 positions in HSV format
            color1 = hsv_frame[150, 150]
            color2 = hsv_frame[150, 250]
            color3 = hsv_frame[150, 350]
            color4 = hsv_frame[250, 150]
            color5 = hsv_frame[250, 250]
            color6 = hsv_frame[250, 350]
            color7 = hsv_frame[350, 150]
            color8 = hsv_frame[350, 250]
            color9 = hsv_frame[350, 350]

            # Add color to Rubik list
            rubik.append(color1)
            rubik.append(color2)
            rubik.append(color3)
            rubik.append(color4)
            rubik.append(color5)
            rubik.append(color6)
            rubik.append(color7)
            rubik.append(color8)
            rubik.append(color9)

            # Add color to Core list
            core.append(color5)

            # Close window
            cv2.destroyAllWindows()
            break

# Close window
cv2.destroyAllWindows()
# Release camera
vid.release()

# Color list of 54 squares
print("Color list of 54 squares:")
print(rubik)
# Color list of 6 faces
print("Color list of 6 faces:")
print(core)

# ------Compare color of each square to decide that is the color of which face-------------
# Define HSV color ranges for Rubik's Cube colors (Hue, Saturation, Value)
colors = {
    "Y": (30, 255, 255),  # Yellow (Hue: 30)
    "R": (0, 255, 255),  # Red (Hue: 0)
    "W": (0, 0, 255),  # White (Hue: 0)
    "B": (120, 255, 255),  # Blue (Hue: 120)
    "O": (15, 255, 255),  # Orange (Hue: 15)
    "G": (60, 255, 255)  # Green (Hue: 60)
}


def compare(hsv):
    best = ("", 999)

    for color in colors:
        col = colors[color]
        # Calculate distance between the current HSV value and the predefined color's HSV
        temp = abs(hsv[0] - int(col[0])) + abs(hsv[1] - int(col[1])) + abs(hsv[2] - int(col[2]))
        if temp < best[1]:
            best = (color, temp)
    return best[0]


cube = ""

for squares in rubik:
    cube = cube + compare(squares.tolist())

print('****************************')
print(cube)

cubeConverted = ''

for char in cube:
    if char == 'G':
        cubeConverted += 'L'
    elif char == 'W':
        cubeConverted += 'F'
    elif char == 'Y':
        cubeConverted += 'B'
    elif char == 'R':
        cubeConverted += 'D'
    elif char == 'B':
        cubeConverted += 'R'
    elif char == 'O':
        cubeConverted += 'U'

print('****************************')
print(cubeConverted)
print('****************************')

# ------Apply algorithm using data of the Rubik cube above to get the solving moves--------
t = kociemba.solve(cubeConverted)

# ------Apply algorithm using data of the Rubik cube above to get the solving moves--------
print(t)
