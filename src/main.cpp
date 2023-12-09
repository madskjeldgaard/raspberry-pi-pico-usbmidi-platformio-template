#include <Arduino.h>
#include <Adafruit_TinyUSB.h>
#include <MIDI.h>

// USB MIDI object
Adafruit_USBD_MIDI usbMidi;
MIDI_CREATE_INSTANCE(Adafruit_USBD_MIDI, usbMidi, MIDI);

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World!");

  TinyUSBDevice.setManufacturerDescriptor("MadsKjeldgaard");
  TinyUSBDevice.setProductDescriptor("Pico Blinkity Blinky");

  usbMidi.begin();
  MIDI.begin();

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, 1);
}

auto pastLEDState = true;
void loop() {
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
