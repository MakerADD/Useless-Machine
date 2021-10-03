#include <Servo.h>

Servo myservo;

void setup() {
  pinMode(4, INPUT_PULLUP);
  pinMode(13, OUTPUT);
  myservo.attach(2);  // attaches the servo on pin 2 to the servo object
  myservo.write(96);
}

void loop() {
  int Switch = digitalRead(4);

  if (Switch == HIGH) {
    digitalWrite(13, HIGH);
    myservo.write(54);
    delay(500);
  } else {
    digitalWrite(13, LOW);
    myservo.write(96);
  }
}
  
