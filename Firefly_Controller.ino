#include <NewPing.h>
NewPing sonar(5,6,20);

int pressurePin = A5;
int force;
const int sensor1 = A1;  // Analog input pin that the potentiometer is attached to
const int sensor2 = A2;  // Analog input pin that the potentiometer is attached to
const int sensor3 = A3;  // Analog input pin that the potentiometer is attached to

int sensorValue1 = 0;        // value read from the pot
int sensorValue2 = 0;        // value read from the pot
int sensorValue3 = 0;        // value read from the pot


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue1 = analogRead(sensor1);
  sensorValue2 = analogRead(sensor2);
  sensorValue3 = analogRead(sensor3);
  force = analogRead(pressurePin);

  Serial.print(sonar.ping_cm());
  Serial.print(",");
  Serial.print(sensorValue1);
  Serial.print(",");
  Serial.print(sensorValue2);
  Serial.print(",");
  Serial.print(sensorValue3);
  Serial.print(",");
  Serial.println(force);
  delay(100);
}
