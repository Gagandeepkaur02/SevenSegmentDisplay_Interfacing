#include "SevSeg.h"
SevSeg sevseg;

void setup() {
byte numDigits = 1;
byte digitPins[]={};
byte segmentPin[] ={6,5,2,3,4,7,8,9};
bool resistorsOnSegments = true;

byte hardwareConfig = COMMON_ANODE;
sevseg.begin(hardwareConfig)

}

void loop() {
  // put your main code here, to run repeatedly:

}
