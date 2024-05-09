[![PlatformIO CI](https://github.com/madskjeldgaard/raspberry-pi-pico-usbmidi-platformio-template/actions/workflows/build.yml/badge.svg)](https://github.com/madskjeldgaard/raspberry-pi-pico-usbmidi-platformio-template/actions/workflows/build.yml)

# A USB MIDI thing made

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

## Dependencies

You need to have platformio installed to make use of this. I prefer using the command line version.

Install it on MacOS by running homebrew:

```bash
brew install platformio
```

## Compiling and uploading

To compile and upload your sketch, simply run the following command:

```bash
pio run -t upload
```
