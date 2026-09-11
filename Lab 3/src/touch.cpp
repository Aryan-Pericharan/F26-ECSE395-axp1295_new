#include <Arduino.h>
//Put your potentiometer pin assignment here
const int sensorPin = A1;
const int ledPin = 13;
// axp1295: designed the led that should turn on and off in the rest of the code 

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
  // axp1295: sets the led pin as an output pin so that instructions may be told to it and not read from it 
}

void loop() {

  //This line should print out the values from the sensor by Serial.println(??);
  int sensorValue = digitalRead(sensorPin);

  if(sensorValue == HIGH){
  Serial.println("Touch Detected");

  digitalWrite(ledPin, HIGH);
  // axp1295: instructing the led to turn on(HIGH)
 
  }else{
    Serial.println("Touch Not Detected");
    digitalWrite(ledPin, LOW);
  }
  delay(50);
}