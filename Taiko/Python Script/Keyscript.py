import serial
from pynput.keyboard import Controller

keyboard = Controller()

arduino  = serial.Serial('COM3', 115200)

while (True):
    key = arduino.readline().decode().strip()

    if key in ['d','f','j','k']:
        keyboard.press(key)
        keyboard.release(key)
