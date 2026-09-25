#include <Arduino.h>
// All comments are Aryan Pericharan's, axp1295
// Example code was used as a template with changes to work specific circuit
// Declared all the pins used for the traffic light and unltrasonic modules 
const int echoPin = SDA;
const int trigPin = SCL;
const int redPin = A5;
const int yellowPin = A1;
const int greenPin = A0;




float readDistance() { // Used from example code --> function for distance calculation
  digitalWrite(trigPin, LOW);   // Ensures it starts at Low 
  delayMicroseconds(2);         // Delay for 2 microseconds
  digitalWrite(trigPin, HIGH);  // Send a  pulse by setting pin to high
  delayMicroseconds(10); // Keeps signal width at least 10 microseconds which is the minimum in the datasheet
  digitalWrite(trigPin, LOW);  // Set pin back to low


  // Measures the pulse and calculates the distance value from the echo pin (tell the microcontroller when the signal comes back)
  float distance = pulseIn(echoPin, HIGH) / 58.00;  // Formula: (340m/s * 1us) / 2 --> from example code 
  return distance;
}



void setup() {
  Serial.begin(115200);// Start serial communication with a baud rate of 115200
  pinMode(echoPin, INPUT);               
  pinMode(trigPin, OUTPUT);  
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);    
  pinMode(greenPin, OUTPUT); // Set pins as input and output depending on use 
  Serial.println("Ultrasonic sensor: ready");  // Print a message indicating the ultrasonic sensor is ready to record 
}

void loop() {
  float distance = readDistance();  // Call the function to read sensor data and get the distance
  if (distance >= 50){ // Turns greenPin on if distance is greater than 50 cm
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin,LOW);
    digitalWrite(yellowPin,LOW);
  } else if(distance >= 20 && distance <= 50){ //Turns yellowPin on if distance is greater than 20 cm and less than 50 cm
    digitalWrite(yellowPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(redPin,LOW);
  }else{ //Turns redPin on if distance is less than 20 cm
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellowPin,LOW);
  }
  Serial.print(distance);           // Print the distance value
  Serial.println(" cm");            // Print " cm" for unit
  delay(400);                       // Delay for 400 milliseconds before repeating the loop
}


