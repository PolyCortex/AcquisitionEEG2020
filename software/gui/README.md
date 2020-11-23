# Acquisition 2020 GUI

![Acquisition Software in action](https://raw.githubusercontent.com/wiki/PolyCortex/FixedChallenge-a19-h20/img/acquisition_software.jpg)

This software is a new iteration of the software that was used for last year's Acquisition project. The major changes introduced by this new version are bug fixes, compatibility with our new acquisition board, changes to the UI, as well as some performance optimizations.

## Key features

- Connect itself to our custom Acquisition board, OpenBCI Cyton board, Muse headband and to a synthetic data stream;
- Multiple realtime signal processing visualizations such as time series, fourier transform, spectrogram, power band, etc;
- Records data and save it to a csv file format;
- Automatic Machine learning classification feature using a custom neural net;
- Tools make your ERP experiences easier.
- Dark mode! 🌙

## Getting started

In order to install the GUI software, please follow these instructions.

### Prerequisites

- Install Python 3.8.
  - Make sure that the "Python38\Scripts" folder is added to your environnment path varible on Windows in order to use pip and hupper without any issue.

### Setup

Create a new virtual environment to isolate Python packages.

> python -m venv .venv

Activate your virtual environment. This step will need to be done everytime you re-open your terminal.

- Linux/macOS:

> source .venv/bin/activate

- Windows:

> .\.venv\Scripts\activate.bat

Install the required dependencies.

> pip install -r requirements.txt

### Configuration for PCB communication

In order to communicate with the PCB, you will need to specify the serial port that will handle the communication. To do so, go to `generate_signal/from_pcb.py` and change the constant value `BAUDRATE` for the baudrate used on the MCU and `SERIAL_PORT` to the port used on your machine.

### Run

Finally, you can start te GUI using

> python main.py
