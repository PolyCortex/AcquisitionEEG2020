import serial
import threading
from time import sleep
from time import time
import numpy as np

# Change these depending on the used
# serial port on your machine.
BAUDRATE = 115200
SERIAL_PORT = '/dev/ttyACM0'


class PcbReader(threading.Thread):
    def __init__(self, gv, collect_data, read_freq):
        super().__init__()
        self.gv = gv
        self.read_freq = read_freq
        self.read_period = 1/read_freq
        self.collect_data = collect_data

        self.ser = serial.Serial(SERIAL_PORT, BAUDRATE, timeout=0.5)

    def run(self):
        self.read()

    def read(self):
        t_init = time()
        while True:
            signal = np.zeros(8)
            for ch in range(4):
                byte_signal = self.ser.readline()
                try:
                    signal[ch] = int(byte_signal[:-2])
                except ValueError as e:
                    print(e)
                    print('byte_signal not valid: ', byte_signal)
                t = time() - t_init
                self.collect_data(signal, t=t)
