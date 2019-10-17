// Paul Schakel
// Servo Control
//

#include <Servo.h>

Servo myServo;

int buttonPin1 = 2; //gray button
int buttonPin2 = 4; //yellow button
int servoPin = 12;
int buttonState1 = 0;
int buttonState2 = 0;
int pos = 0;

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  myServo.attach(servoPin);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  myServo.write(pos);
  delay(15);

  if (buttonState1 == HIGH) {
    //servo rotates right
    Serial.println("Servo is rotating right");
    if (pos >= 180) {
      pos = 0;
    }
    pos += 2;
  }
  else if (buttonState2 == HIGH) {
    //servo rotates left
    Serial.println("Servo is rotating left");
    if (pos <= 0) {
      pos = 180;
    }
    pos -= 2;
  }
}
