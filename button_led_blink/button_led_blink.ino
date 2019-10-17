//Paul Schakel
//Button LED Blink
//This code makes an LED blink when a button is pressed

int previous = 0;
int buttonState = 0;
bool blinkState = false;

int button = 12;
int led = 2;
void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == HIGH && previous == 0) {
    blinkState = !blinkState;
  }
  if (blinkState == true) {
    Serial.println("LED is blinking");
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(led, LOW);
    delay(100);
  } else {
    //Turns it off
    digitalWrite(led, LOW);
  }
  Serial.println(buttonState);
  previous = buttonState;
}
