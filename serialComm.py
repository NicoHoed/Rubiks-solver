import serial
import time

# Read the solution from the file
with open("solution.txt", "r") as f:
    t = f.read().strip()  # Read and remove any extra spaces

# Open Serial port
arduino = serial.Serial(port='COM3', baudrate=115200)

# Wait for Arduino to initialize
time.sleep(5)

# Send start signal
arduino.write(bytes("MOVE", 'utf-8'))
time.sleep(2)  # Wait for Arduino acknowledgment (if needed)

# Send solving moves
arduino.write(bytes(t, 'utf-8'))

# Wait for Arduino to finish execution (adjust timing as needed)
time.sleep(30)

# Close Serial port
arduino.close()
