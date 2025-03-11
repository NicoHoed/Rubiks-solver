import serial
import time
import keyboard  # using module keyboard

# Read the solution from the file
with open("solution.txt", "r") as f:
    t = f.read()

# Open Serial port
arduino = serial.Serial(port='COM5', baudrate=115200)

# Wait for Arduino to initialize
time.sleep(3)


while True:
    try:
        if keyboard.is_pressed('enter'):
            print('You Pressed ENTER!')
            arduino.write(bytes(t, 'utf-8'))  # Send message to Arduino
            break
    except:
        break  # Exit if any exception occurs

#arduino.write(bytes(t, 'utf-8'))

# Wait for Arduino to finish execution (adjust timing as needed)
time.sleep(3)

# Close Serial port
arduino.close()



