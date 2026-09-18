# Lab 4: Actuator Adventures

## Aryan Pericharan

### Used VS code with platformIO extension to create and upload code to the ESP32 from my Windows system

### Steps
1. Open the project in platformIO
2. Edit the skeleton code for the TT Motor (Make sure all other cpp files have their code commented out)
3. Buold the cirucit according to the schematics
4. Upload code and debug until functional (motor rotates correctly)
5. Repeat for the TT motor Rotate script
6. Chnage the circuit and redo for the Servo Motor

### Repository
1. The code files will containt the code for turnign the TT and servo motors
2. Instrcutions on the project and how to do it
3. Pin diagrams and circuits diagrams for all connection of the lab 



### Changes to code behavior

## Servo Motor.cpp
1. minPulseWidth: This defines the minimum limit that the servo can turn. The angle we define later then correlates to this position on the motor. Increasing decreases the range. If decreased too much it will stop spinning and make only a sound due to going beyond physical capabilities
2. MaxPulseWidth: The exact opposite of the minPulseWidth and if you increase it increases its range unless you input a number beyond its capabilities, then the motor doesn't spin and only makes a sound becuase it goes beyond the physical capabilities
3. setPeriodHertz: Controls how often the pulses are sent. 
Increasing causes it to act jittery and not fully rotate due to the time between pulses not being long enough 
4. rotationRange: This specific Servo only travels to 180
5. Delay: controls the speed fo the turn. Increase slows the turn while decrease makes it faster to a point, then its all the same speed

Images of actual created circuits are below adn in the images folder: 

![TT Motor Circuit](https://github.com/Aryan-Pericharan/F26-ECSE395-axp1295_new/blob/main/Images/TT%20motor%20connections.jpeg)

![Servo Motor Circuit](https://github.com/Aryan-Pericharan/F26-ECSE395-axp1295_new/blob/main/Images/Servo%20motor%20connections.jpeg)
### Reflection

1. How long did it take you to complete this assignment?
    + 1 hour and 40 min
2. What level of difficulty would you associate with this assignment? (Low, Medium, High)
    + Low 
3. If you associated medium/high difficulty with this assignment, what aspect did you find the most difficult?
4. How comfortable do you currently feel with the course content?
    + Very comfortable
5. Do you have any additional information or feedback you would like to share with the instructors?
    + NA

