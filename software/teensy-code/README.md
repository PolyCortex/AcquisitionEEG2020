# Acquisition 2020 Teensy code

## How it works

1. Starts four analog sampling channels and serial communication.
2. Starts a timer
3. After 5000 us have passed (200 Hz sample rate), the timer is reset, the four channels are sampled and the data is pushed through the serial interface.

## Getting started

In order to install the software on the Teensy, you need to download the arduino software, its teensy bridge and to connect the Teensy to the computer via USB.
