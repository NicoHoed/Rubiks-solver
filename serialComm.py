import serial
import time
import keyboard  # using module keyboard

# Read the solution from the file
with open("solution.txt", "r") as f:
    t = f.read()

# Open Serial port
arduino = serial.Serial(port='COM6', baudrate=115200)


# Wait for Arduino to initialize
time.sleep(3)

while True:
    if keyboard.is_pressed('enter'):
        print('You Pressed ENTER!')
        arduino.write(bytes("MOVE", 'utf-8'))

        time.sleep(0.5)

        with open("solution.txt", "r") as f:
            t = f.read()
        print(t)
        time.sleep(2)
        arduino.write(bytes(t, 'utf-8'))
        time.sleep(2)
        arduino.write(bytes("END", 'utf-8'))
        break


#arduino.write(bytes(" END", 'utf-8'))


#arduino.write(bytes(t, 'utf-8'))

# Wait for Arduino to finish execution (adjust timing as needed)
time.sleep(3)

# Close Serial port
arduino.close()