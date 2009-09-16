// Sweep
// by BARRAGAN <http://barraganstudio.com> 

#include <Servo.h> 
 
#include "WProgram.h"
void setup();
void loop();
Servo myservo, yourservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
              
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
  yourservo.attach(10);
} 
 
 
void loop() 
{ 
  for(pos = 0; pos < 120; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 120; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  
    for(pos = 1; pos < 120; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    yourservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 120; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    yourservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(1);                       // waits 15ms for the servo to reach the position 
  } 
  
  
} 

int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

