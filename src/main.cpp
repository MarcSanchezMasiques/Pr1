#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500);
  Serial.println("ON");
  delay(500);
  Serial.println("OFF");
  }