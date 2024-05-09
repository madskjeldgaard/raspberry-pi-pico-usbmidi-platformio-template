[![PlatformIO CI](https://github.com/madskjeldgaard/raspberry-pi-pico-usbmidi-platformio-template/actions/workflows/build.yml/badge.svg)](https://github.com/madskjeldgaard/raspberry-pi-pico-usbmidi-platformio-template/actions/workflows/build.yml)

# A USB MIDI thing

A simple template for creating an Arduino-based project for the Raspberry Pi Pico using platformio.

It is pre-setup with everything needed to make a USB MIDI controller and can be easily modified for other purposes.

## Features

- Platformio-based – easy to compile and upload, gets dependencies automatically
- Has common libraries set up:
  - Bounce2 for debouncing button presses
  - ResponsiveAnalogRead for smoother readings of analog voltages / potentiometers
  - Adafruit MIDI library
  - TINYUSB for USB Midi
- C++17, allowing a lot of modern C++ tricks.
- VSCode tasks are included making building easy in VSCode and in NeoVim (using the Overseer plugin)
- A Github Action which runs every time you push code to test if your firmware still compiles.

## Dependencies

You need to have platformio installed to make use of this.

Install it on MacOS by running homebrew:

```bash
brew install platformio
```

## Compiling and uploading

To compile and upload your sketch, simply run the following command:

```bash
pio run -t upload
```
