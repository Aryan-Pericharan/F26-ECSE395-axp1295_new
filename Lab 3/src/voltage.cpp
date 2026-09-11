
/*#include <Arduino.h>

// function prototype
float voltage(float analogvalue);

// Put your potentiometer pin assignment here
const int sensorPin = A1;

void setup() {
    Serial.begin(115200);
}

void loop() {
   
    int sensorValue = analogRead(sensorPin); 
    // axp1295: Reads the analog value fromteh A1 sensor pin that is defined 
    float sensorVoltage = voltage(sensorValue);
     // This is the line for printing in the serial
    Serial.println(sensorVoltage);
    delay(80);
    // axp1295: changed the delay to 80ms which producesa a gap of 80ms between loop runs and readings 
    //delay(50); 
}

// function to calculate output voltage
float voltage(float analogvalue){
    float voltage;
    
    voltage = (analogvalue*3)/4095;
    // axp1295: takes the analog value input of the function and does the voltage calculation with it
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
   
}*/