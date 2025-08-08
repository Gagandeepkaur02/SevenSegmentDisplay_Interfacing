#include "SevSeg.h"
SevSeg sevseg; 

void setup() {
    byte numDigits = 1;  // Single digit display
    byte digitPins[] = {};  // No digit control pins for single digit
    byte segmentPins[] = {6, 5, 2, 3, 4, 7, 8, 9}; // a,b,c,d,e,f,g,dp
    bool resistorsOnSegments = true; // Resistors on segment pins

    byte hardwareConfig = COMMON_ANODE; //  common anode display
    sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
    sevseg.setBrightness(90);
}

void loop() {
    static unsigned long lastChange = 0;
    static int i = 0;

    if (millis() - lastChange >= 1000) { // Change digit every 1 sec
        sevseg.setNumber(i, i % 2); // i%2 = decimal point toggle
        i = (i + 1) % 10; // Loop 0-9
        lastChange = millis();
    }

    sevseg.refreshDisplay(); //  Must be called continuously
}
