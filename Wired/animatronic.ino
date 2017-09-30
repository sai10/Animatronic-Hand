#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;

int Flex1 = 0;		//Thumb Finger
int Flex2 = 1;	        //Index Finger
int Flex3 = 2;		//Middle Finger
int Flex4 = 3;		//Ring Finger
int Flex5 = 4;		//Pinky Finger

void setup()  
{
  Serial.begin(9600);
}


void loop()
{

  //					Thumb	Finger
  int Flex1Pos;  
  int Servo1Pos;  
  Flex1Pos = analogRead(Flex1); 
  Servo1Pos = map(Flex1Pos, 550, 700, 0, 180);  
  Servo1Pos = constrain(Servo1Pos, 0, 180);  
  Servo1.write(Servo1Pos);

  //					Index	Finger
  int Flex2Pos;  
  int Servo2Pos;  
  Flex2Pos = analogRead(Flex2); 
  Servo2Pos = map(Flex2Pos, 550, 700, 0, 180); 
  Servo2Pos = constrain(Servo2Pos, 0, 180);  
  Servo2.write(Servo2Pos);
  
  //					Middle	Finger
  int Flex3Pos;  
  int Servo3Pos;  
  Flex3Pos = analogRead(Flex3); 
  Servo3Pos = map(Flex3Pos, 550, 700, 0, 180); 
  Servo3Pos = constrain(Servo3Pos, 0, 180);  
  Servo3.write(Servo3Pos);
 
  //					Ring	Finger
  int Flex4Pos;  
  int Servo4Pos;  
  Flex4Pos = analogRead(Flex4); 
  Servo4Pos = map(Flex4Pos, 550, 700, 0, 180); 
  Servo4Pos = constrain(Servo4Pos, 0, 180);  
  Servo4.write(Servo4Pos);
  
 //					Pinky	Finger 
  int Flex5Pos;  
  int Servo5Pos;  
  Flex5Pos = analogRead(Flex5); 
  Servo5Pos = map(Flex5Pos, 550, 700, 0, 180); 
  Servo5Pos = constrain(Servo5Pos, 0, 180);  
  Servo5.write(Servo5Pos);
 
}



