#include <Servo.h>

Servo jumpServo;

int ldrPin = A0;
int servoPin = 9;
int threshold = 500;   // adjust based on light readings
int ldrValue = 0;

void setup() {
  Serial.begin(9600);
  jumpServo.attach(servoPin);
  jumpServo.write(90);
  delay(1000);
}

void loop() {
  ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < threshold) {
    Serial.println("Obstacle detected! Jump!");
    jumpServo.write(40);
    delay(150);
    jumpServo.write(90);
    delay(600);
  }

  delay(50);
}
