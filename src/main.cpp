#include <Arduino.h>
  int analogPin = A3;
  int val = 0;
  float voltage = 0;
  int ledPin = 12;
  int redledPin = 8;


void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(redledPin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:
}

void loop() {
  val = analogRead(analogPin);
  voltage = 5.0 * val / 1024;
  if (voltage >= 1.5) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(redledPin, LOW);
  }
  else
  {
    digitalWrite(redledPin, HIGH);
    digitalWrite(ledPin, LOW);
  }
  
  Serial.println(voltage);
  delay(100);

  // put your main code here, to run repeatedly:
} 