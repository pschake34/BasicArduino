//Paul Schakel
//Two Button LED Blink
//Like Button LED Blink only w/2 leds and buttons

int buttonPin1 = 2; //gray button
int buttonPin2 = 4; //yellow button
int ledPin1 = 8; //red led
int ledPin2 = 13; //blue led
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  if (buttonState2 == HIGH) {
    Serial.println("LED 2 is blinking");
    digitalWrite(ledPin2, HIGH);
    delay(250);
    digitalWrite(ledPin2, LOW);
    delay(250);
  }
  if (buttonState1 == HIGH) {
    Serial.println("LED 1 is blinking");
    digitalWrite(ledPin1, HIGH);
    delay(250);
    digitalWrite(ledPin1, LOW);
    delay(250);
  }
}
