#include <Arduino.h>

int sensorPin = 14;
int ledPin = 13;
int buzzerPin = 15;
int sensor;

void setup(){
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
}

void loop(){
  sensor = digitalRead(sensorPin);

  if (sensor == HIGH){
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}