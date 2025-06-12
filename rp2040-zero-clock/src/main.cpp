#include <Arduino.h>

void setup(){

  Serial.begin(115200);

  while(!Serial.available());

}

void loop(){

  Serial.println(millis());
  delay(100);

}