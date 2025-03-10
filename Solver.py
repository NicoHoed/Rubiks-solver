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
        # Draw rectangle on captured image
        cv2.rectangle(frame, (100, 100), (400, 400), (0, 255, 0), 2)

        # Show images
        cv2.imshow("camera", frame)

        # Break by pressing "z" (not "Z")
        if cv2.waitKey(10) == ord('z'):
            # Get color from 9 positions
            color1 = frame[150, 150]
            color2 = frame[150, 250]
            color3 = frame[150, 350]
            color4 = frame[250, 150]
            color5 = frame[250, 250]
            color6 = frame[250, 350]
            color7 = frame[350, 150]
            color8 = frame[350, 250]
            color9 = frame[350, 350]

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
#print("Color list of 54 squares:")
#print(rubik)
# Color list of 6 faces
#print("Color list of 6 faces:")
#print(core)

# ------Compare color of each square to decide that is the color of which face-------------
colors = {
    "O" : core[0].tolist(),
    "B" : core[1].tolist(),
    "W" : core[2].tolist(),
    "R": core[3].tolist(),
    "G": core[4].tolist(),
    "Y": core[5].tolist(),

}


def compare(bgr):
    best = ("", 999)
    for color in colors:
        col = colors[color]

        temp = abs(bgr[0] - int(col[0])) + abs(bgr[1] - int(col[1])) + abs(bgr[2] - int(col[2]))
        if temp < best[1]:
            best = (color, temp)
    return best[0]


cube = ""


for squares in rubik:

    cube = cube + (compare(squares.tolist()))

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


# ------Apply algorithm using data of the Rubik cube above to get the solving moves--------

print("Cube String for Kociemba Solver:", cubeConverted)
print("Length of Cube String:", len(cubeConverted))


t = kociemba.solve(cubeConverted)


# Save solving moves to a file
with open("solution.txt", "w") as f:
    f.write(t)
