#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // TODO: Define your baud rates
   Serial.begin(115200);
   // Start the Serial connection
}

void loop() {
  // TODO: Define your text output
   // Print the words to the Serial Monitor.
  Serial.println("wassup"); 
  // TODO: Set up your delay in milliseconds
  digitalWrite(LED_PIN, HIGH); // LED On
  delay(800); // Speed in milliseconds
  digitalWrite(LED_PIN, LOW); // LED Off
  delay(800); // Speed in milliseconds
}