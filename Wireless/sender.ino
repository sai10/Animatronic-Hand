int Flex1 = 0;		// Thumb Finger
int Flex2 = 1;		// Index Finger
int Flex3 = 2;		// Middle Finger
int Flex4 = 3;		// Ring Finger
int Flex5 = 4;		// Pinky Finger


void setup(){
  Serial.begin(9600);
}

void loop(){
  
  // 							Thumb Finger
  int Flex1Pos = analogRead(Flex1);
  Flex1Pos = map(Flex1Pos,515, 540,0, 180);
  Flex1Pos = constrain(Flex1Pos,0, 180);
  Serial.write(Flex1Pos);
  
  // 							Index Finger
  int Flex2Pos = analogRead(Flex2);
  Flex2Pos = map(Flex2Pos,612, 670,0, 180);
  Flex2Pos = constrain(Flex2Pos,0, 180);
  Serial.write(potVal2);
  
  // 							Middle Finger
  int Flex3Pos = analogRead(Flex3);
  Flex3Pos = map(Flex3Pos,570, 670,0, 180);
  Flex3Pos = constrain(Flex3Pos,0, 180);
  Serial.write(Flex3Pos);
  
  //							Ring Finger
  int Flex4Pos = analogRead(Flex4);
  Flex4Pos = map(Flex4Pos,620, 680,0, 180);
  Flex4Pos = constrain(Flex4Pos,0, 180);
  Serial.write(Flex4Pos);
  
  // 							Pinky Finger
  int Flex5Pos = analogRead(Flex5);
  Flex5Pos = map(Flex5Pos,510, 620,0, 180);
  Flex5Pos = constrain(Flex5Pos,0, 180);
  Serial.write(Flex5Pos);
  
  delay(100);
}
