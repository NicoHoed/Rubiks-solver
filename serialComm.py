##################################################################
# Simple code: Serial communication
##################################################################

import serial
import time


# Example Moves:
t = "R L U D"

# Open Serial port
arduino = serial.Serial(port='COM3', baudrate=115200)

# Wait 10 seconds
time.sleep(10)

# Send word "MOVE" to Arduino
arduino.write(bytes("MOVE",   'utf-8'))

# Wait 10 seconds
time.sleep(10)

# Send solving Moves
arduino.write(bytes(t,   'utf-8'))

# Wait 60 seconds
time.sleep(60)

# Close Serial port
arduino.close()


