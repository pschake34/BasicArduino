
int ledPin = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
delay(1000);
}


//digitalWrite() is used to set the output to the pin as high and low
//because we supplied pin x with power instead of pin y
//the data would be sent over slower
//the larger the delay, the slower the blinking becomes
