# Acquisition 2020 GUI

![Acquisition Software in action](https://raw.githubusercontent.com/wiki/PolyCortex/FixedChallenge-a19-h20/img/acquisition_software.jpg)

This software is a new iteration of the software that was used for last year's Acquisition project.

## Key features

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

In order to communicate with the PCB, you will need to specify the serial port that will handle the communication. To do so, go to `generate_signal/from_pcb.py` and change

### Run

Finally, you can start te GUI using

> python main.py
