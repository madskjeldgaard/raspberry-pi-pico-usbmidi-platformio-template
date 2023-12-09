# Raspberry Pi Pico platformio template

This is a simple template for creating an Arduino-based project for the Raspberry Pi Pico using platformio.

It includes a simple example of using USB midi in this environment to easily create midi controllers from the Pico.

Also, it's set up to use c++17 instead of the default c++11 version.

The advantage of working with the Pico like this is that you are able to use it like any other Arduino enabled board basically. For more information, [see this link](https://arduino-pico.readthedocs.io/en/latest/index.html).

Best of all though? You can upload to the board without having to plug/unplug the device while pressing the boot button.

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
