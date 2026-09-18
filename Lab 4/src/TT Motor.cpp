/*#include <Arduino.h>

// TODO: Define your pins
// Hint: Look at your wiring. Which pins did you use?
const int MOTOR_B_1A = A1; // Replace 0 with your pin number
const int MOTOR_B_2A = A0; // Replace 0 with your pin number


void setup() {

  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_2A, OUTPUT);  

  analogWrite(MOTOR_B_1A, 0);
  analogWrite(MOTOR_B_2A, 500);
// Modify the value: If the value is below 200 the mechanical portion of the motor doesn;t turn while the sound of the internal motor turning can be heard 
// Swapping the values: Causes the motor to turn in the opposite direction
// Modify the dleay: controls duration of the spin before stopping
  delay(1000);

  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_2A, 0);

}

void loop() {

}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32.

*/