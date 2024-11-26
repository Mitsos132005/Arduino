#include <Arduino.h>

int DPPin = A0;

float vout;
float DP;

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  vout = analogRead(DPPin);  // read the input pin

DP = 1000.00*((vout/1023.00) -0.04)/0.09 ; // in Pa

  Serial.println(DP);        
}
