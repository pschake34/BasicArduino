//Paul Schakel
//Variable LED Blinker
//This code makes an LED blink at a rate starting at once every 4 seconds and decreasing in an increment
//of .2 seconds each time until it reaches .2 seconds between each blink.

// A variable is a sort of container for a value. 
//You can use variables in a loop to plug different values into the same block of code
int ledPin1 = 13;
int ledPin2 = 12;
int delayVar1 = 2000;
int delayVar2;

void setup() {
  // Code inside the setup function runs once.
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // code inside the loop function runs forever, repeatedly
  while (true){
    digitalWrite(ledPin1, HIGH);
    delay(delayVar1);
    digitalWrite(ledPin1, LOW);
    delay(delayVar1);
    Serial.println(delayVar1);
    delayVar1 -= 200;
    if (delayVar1 <= 200){
      delayVar2 = 200;
      break;
    }
  }
  while (true){
    digitalWrite(ledPin2, HIGH);
    delay(delayVar2);
    digitalWrite(ledPin2, LOW);
    delay(delayVar2);
    Serial.println(delayVar2);
    delayVar2 += 200;
    if (delayVar2 >= 2000){
      delayVar1 = 2000;
      break;
    }
  }
}
