#include <Time.h>
#include "binary_clock.h"

#define DEMO        0 // set to 1 for minutes:seconds clock

// set up values for each time digit
int digit0 = 0;
int digit1 = 0;
int digit2 = 0;
int digit3 = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i=0; i < 20; i++) {
    pinMode(i, OUTPUT);
  }
  
  setTime(DEFAULT_TIME);
}

void loop() {
  // put your main code here, to run repeatedly: 
  
  // Get the units and tens digits of seconds, minutes, hours
  if (DEMO) {
    digit0 = second()%10;
    digit1 = second()/10; 
    digit2 = minute()%10;
    digit3 = minute()/10;
  }
  else {
    digit0 = minute()%10;
    digit1 = minute()/10;
    digit2 = hourFormat12()%10;
    digit3 = hourFormat12()/10;
  }
  
  digitalWrite(DIGIT0_1,digit0&1);
  digitalWrite(DIGIT0_2,digit0&2);
  digitalWrite(DIGIT0_4,digit0&4);
  digitalWrite(DIGIT0_8,digit0&8);
  
  digitalWrite(DIGIT1_1,digit1&1);
  digitalWrite(DIGIT1_2,digit1&2);
  digitalWrite(DIGIT1_4,digit1&4);
  digitalWrite(DIGIT1_8,digit1&8);
  
  digitalWrite(DIGIT2_1,digit2&1);
  digitalWrite(DIGIT2_2,digit2&2);
  digitalWrite(DIGIT2_4,digit2&4);
  digitalWrite(DIGIT2_8,digit2&8);
  
  digitalWrite(DIGIT3_1,digit3&1);
  digitalWrite(DIGIT3_2,digit3&2);
  digitalWrite(DIGIT3_4,digit3&4);
  digitalWrite(DIGIT3_8,digit3&8);
  
  digitalWrite(AM, isAM());
  digitalWrite(PM, isPM());
}
