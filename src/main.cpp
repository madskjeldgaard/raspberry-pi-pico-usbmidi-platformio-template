#include <Arduino.h>
#include <Adafruit_TinyUSB.h>
#include <MIDI.h>

// Smooth buttons and potentiometers, see the libraries for examples on how to use them.
#include <Bounce2.h>
#include <ResponsiveAnalogRead.h>

// USB MIDI object
Adafruit_USBD_MIDI usbMidi;
MIDI_CREATE_INSTANCE(Adafruit_USBD_MIDI, usbMidi, MIDI);

// Example of handling midi input to the device
void handle_midi_note_on(byte channel, byte note, byte velocity) {
  Serial.println("Got note on!");
}

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World!");

  TinyUSBDevice.setManufacturerDescriptor("MadsKjeldgaard");
  TinyUSBDevice.setProductDescriptor("Pico Blinkity Blinky");

  usbMidi.begin();
  MIDI.begin();

  // Turn midi thru off
  MIDI.turnThruOff();

  // Set the MIDI note on handling function
  MIDI.setHandleNoteOn(handle_midi_note_on);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, 1);
}

auto pastLEDState = true;
void loop() {
  MIDI.read();
  
  Serial.println("Hello from da loop!");

  // Blink the LED
  digitalWrite(LED_BUILTIN, static_cast<int>(pastLEDState));

  // Send a midi note
  if(pastLEDState){
    MIDI.sendNoteOn(60, 127, 1);
  } else {
    MIDI.sendNoteOff(60, 0, 1);
  }

  pastLEDState = !pastLEDState;

  delay(500);
}
