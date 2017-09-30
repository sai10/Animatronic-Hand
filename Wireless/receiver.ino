#include <Servo.h> 
 
Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;
Servo Servo5;
 
int pos = 0;
int val1;   
int val2;
int val3;
int val4;
int val5;
 
void setup() 
{ 
  Serial.begin(9600);
} 
 
 
void loop() 
{ 
    if(Serial.available() >= 5){
	  val1 = Serial.read();
	  val2 = Serial.read();
	  val3 = Serial.read();
	  val4 = Serial.read();
	  val5 = Serial.read();
	  
	  Serial.print(val1);
	  Serial.print(" | ");
	  Serial.print(val2);
	  Serial.print(" | ");
	  Serial.print(val3);
	  Serial.print(" | ");
	  Serial.print(val4);
	  Serial.print(" | ");
	  Serial.println(val5);
	  
	  Servo1.write(val1);
	  Servo2.write(val2);
	  Servo3.write(val3);
	  Servo4.write(val4);
	  Servo5.write(val5);

	  delay(100);
    }
}
