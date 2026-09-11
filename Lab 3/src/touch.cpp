#include <Arduino.h>
//Put your potentiometer pin assignment here
const int sensorPin = A1;
const int ledPin = 13;
// axp1295: designed the led that should turn on as 13 which is the onboard led on the ESP32

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // axp1295: sets the led pin as an output pin so that instructions may be sent to it
void loop() {

  //This line should print out the values from the sensor by Serial.println(??);
  int sensorValue = digitalRead(sensorPin);

  if(sensorValue == HIGH){
  Serial.println("Touch Detected");

  digitalWrite(ledPin, HIGH);
  // axp1295: instructing the led to turn on(HIGH), turning it on when touch is detected 
 
  }else{
    Serial.println("Touch Not Detected");
    digitalWrite(ledPin, LOW)
    // axp1295: opposite of the HIGH line. It turns off the LED upon no touch
  }
  delay(50);
}