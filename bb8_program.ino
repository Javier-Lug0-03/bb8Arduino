#include <SoftwareSerial.h> 
#include <AFMotor.h>

// Rx = 2 - Tx = 3
SoftwareSerial Receptor(2,3);
void setup() {
  Serial.begin(9600);
  Receptor.begin(9600);
  Serial.println("Ready to connect \nDefault password is 1234 or 0000");
}

void loop() {
  if (Receptor.available())
    Serial.write(Receptor.read());
  if (Serial.available())
    Receptor.write(Serial.read());
}
