<h1 align="center">
  <br>
  <img src="https://raw.githubusercontent.com/wiki/PolyCortex/FixedChallenge-a19-h20/img/prototype-board.png" alt="Acquisition board 2020" width="200">
  <br>
  Acquisition board 2020
  <br>
</h1>

<h4 align="center">A 4-channels biosignal acquisition pipeline.</h4>
<p align="center">
  <a href="http://polycortex.polymtl.ca/">
    <img src="https://img.shields.io/badge/about%20us-%E2%84%B9-blue?style=for-the-badge&logo=data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAB3VBMVEU4qds2qNo1qNo3qNo5qds4qds3qNo5qds6qtswpdk5qds3qNo3qNo5qds3qNo4qds3qNo1p9o4qds2qNo3qNo4qdszp9o0p9o4qds1p9o7qtuQzuqRz+s7qts2qNpPs981p9rz+vz0+v03qNo2qNpIsN2Ozuoqo9j///////8ro9iLzeqf1e0nodee1e2Nzeoootjt9/vs9vspotiJzOmPz+qMzeqa0+wnodib0+yW0ewvpdkvpdmIy+k7qtuLzeqNzuo7qts4qdsspNhpvuNxweU4qds4qds4qds3qNo8qts3qNovpdkupNk3qNo8qts3qNoxptk4qds2qNotpNlTtN9Qs984qdpUteA5qduy3fH///9vweTD5fTA5POf1e3r9vu84vJuwOQ3qNsqo9iIy+kanNXY7vjX7fchn9aGyukro9g+q9zL6PUyptnc8PjT7PcvpdnJ5/VwweVvweXb7/gwpdkupNltwOSh1u5Ert01p9rc7/hDrd2j1+41qNq+4/O74fI6qtu94vOY0uxKsN4zptrU7PdJsN6a0+xWtuAootje8PnQ6vYendY3qNrB5PNYtuDo9fpStN/M6fXn9PqAyOfi8vnw+Px8xufm9PpYt+A0p9pbuOE6qdveSf6lAAAAUXRSTlMAAAAAAAM1q+j8rjlu/XYCS/38/FCy+/y1Btn+/NoHCd7+8v7gCQne/vrfCAneCQne/v7eCQkJCd4JBdjaB7D8/LRL/fz8T3Z3Oq7p/f3qsDt4St8jAAAAAWJLR0QovbC1sgAAAAd0SU1FB+QLFhI3GjFk5DYAAAEWSURBVBjTY2BgZWRj5+AMDOLk4OJmYmVgYGXm4Q0OCQ0LjwgJjuRj5mdgFogUFIqKjo6JjRMWjBRhZmAWDRKLjY5PSEyKjhVPlmBmkJRKkY5OTUvPyMyKlsmWlWOQV8hRzM3Oyy8ozC5SUlZRZVBTL9YoCckrLSgrT9Ks0NJm0NGt1KiqLqspKA+u1ajT1WPQN0g0DA4qBApE1hs1GJswmBo0GgZHAgVCmuqNmo3NGMwtWjRay9pK29vKOjQ6dS0ZrKy7NGKDu3t6+/onaEy0sWVgsQuxj540ecrUadOjHUIcWRiYnSKdXWZEzYyOnuXqHOnGzMDP4t4UUj17zuS59SHzPFj4Qd719PL2CQr09fMPYGBlAADh2ktDQeyqCAAAACV0RVh0ZGF0ZTpjcmVhdGUAMjAyMC0xMS0yMlQxODo1NDo1NCswMDowMO6afBwAAAAldEVYdGRhdGU6bW9kaWZ5ADIwMjAtMTEtMjJUMTg6NTQ6NTQrMDA6MDCfx8SgAAAAAElFTkSuQmCC">
  </a>
 </p>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#how-it-works">How It Works</a> •
  <a href="#project-structure">Project Structure</a> •
  <a href="#learn-more">Learn more</a> •
  <a href="#learn-more">About us</a>
</p>

---

The project contained in this repository is a 4-channel prototype board produced in the development of a PCB to acquire EEG signals. It contains an instrumentation amplifier, a notch filter and an anti aliasing filter. It is designed to be sampled either in a lab with the help of an oscilloscope or with a computer through a Teensy 3.2 microcontroller development board. As well, a signal visualization software can analyze the signal coming from this board.

**Disclaimer:** This prototype board does not work to sample EEG signals and was never intended as such. It was meant to be a platform used to test designs of filtering and amplification circuits, which we would have integrated into a true production PCB. However, our development cycle was slowed down due to the pandemic and we had to plan the release of the production version of the board for April 2021 instead. Even though we did not finish the project, we still wanted to show our progress and so we submit this prototype for the NeuroTechX 2020 Fixed Challenge.

## Key features

- A realtime data acquisition software that can records, save, perform machine learning and neuroscience experiments.

## How it works

### Acquisition

### Signal processing

### Data Transmission

Data from the board is received on the computer via one of its USB serial port. 

### Real-time visualization

The realtime visualization software can read the flow of data coming from the serial port and plot the signal on every channel in realtime. It can also show the data in the frequency domain using spectral, spectrogram and power band reprensentations.

### Data recording

All the raw data coming from the board can then be saved in a csv file for subsequent use.

## Project Structure

- The `cad/` folder contains files used to make the PCBs. The prototype board is under `cad/prototype-board/`. Two supply prototypes are included under `cad/supply-analog/` and `cad/supply-digital/`.
- The `components/` folder contains the datasheets for important components.
- The `simulations/` folder contains ltspice simulations for the elements of the analog processing pipeline.
- The `software/` folder contains everything that is linked to software. The computer software for digital signal processing and realtime visualization is under `software/gui/`. Check it out for more information about it. The microcontroller software for sampling the analog signals and to stream them to the computer is under  `software/teensy-code/`.

## Learn more

You can read more about the technical aspect of the prototype board, and of the planned production board in this
[wiki](https://github.com/PolyCortex/AcquisitionEEG2020/wiki).

## About us

[PolyCortex](http://polycortex.polymtl.ca/) is a student club based at [Polytechnique Montreal](https://www.polymtl.ca/).

The goal of PolyCortex is to develop expertise in neuroscience and engineering to solve neuroengineering problems. This field aims to create technological solutions dedicated to the search for innovative solutions to neuroscience problems.

To do this, we recommend the use of solutions revolving around the design of brain-machine interface devices, the implementation of embedded systems, the use of machine learning and signal processing techniques.
