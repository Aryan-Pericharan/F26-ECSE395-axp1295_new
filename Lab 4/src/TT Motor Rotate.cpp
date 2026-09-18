/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1;
const int MOTOR_B_2A = A0; 

void setup() {
  // TODO: Initialize Serial communication
  Serial.begin(115200);

  // TODO: Set your motor pins as OUTPUTs
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_2A, OUTPUT); 

 Serial.println("IT IS RUNNING");
}

void loop() {
  // --- SECTION 1: Clokwise (5s) ---
  Serial.println("5s_CLOCKWISE");
  
  // TODO: Write HIGH to one pin and LOW to the other
   digitalWrite(MOTOR_B_1A, 0);
   digitalWrite(MOTOR_B_2A, 250);
  
   delay(5000);

  // --- SECTION 2: Stop (2s) ---
   Serial.println("2s");
  
  // TODO: Turn off the motor
   digitalWrite(MOTOR_B_1A, 0);
   digitalWrite(MOTOR_B_2A, 0);

   delay(2000);

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("5s_Counter_Clockwise");
  
  // TODO: Write HIGH to one pin and LOW to the other
   digitalWrite(MOTOR_B_1A, 250);
   digitalWrite(MOTOR_B_2A, 0);

   delay(5000);

  // --- SECTION 4: Stop (2s) ---
   Serial.println("2s");
  
  // TODO: Turn off the motor
   digitalWrite(MOTOR_B_1A, 0);
   digitalWrite(MOTOR_B_2A, 0);

   delay(2000);
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
*/