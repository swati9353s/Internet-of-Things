#include <SoftwareSerial.h>
char t;

// Include the DHT library
#include "DHT.h"
// Declare the pin connected to the DHT sensor
#define DHTPIN 2
#define DHTTYPE DHT11   // DHT 11
DHT dht(DHTPIN, DHTTYPE);

// Include the Servo library
#include <Servo.h>
// Declare the pin connected to the servo motor
#define servoPin 3
// Create a servo object
Servo Servo1;

#define motor1pin1 6
#define motor1pin2 7

float hum;
float tmp;

void dispTemp()
{
  hum = dht.readHumidity();
    // Read temperature as Celsius (the default)
    tmp = dht.readTemperature();
    Serial.print(F(" Humidity: "));
    Serial.print(hum);
    Serial.print(F("%  Temperature: "));
    Serial.print(F(" "));
    Serial.print(tmp);
    Serial.println(F("°C"));
}

void setup() {

  SoftwareSerial mySerial(0, 1); // RX, TX
  Serial.begin(9600);

  pinMode(12, OUTPUT);  //right motors forward
  pinMode(11, OUTPUT);  //right motors reverse
  pinMode(10, OUTPUT);  //left motors forward
  pinMode(9, OUTPUT);  //left motors reverse

  dht.begin();

  // We need to attach the servo to the used pin number
  Servo1.attach(servoPin);
  Servo1.write(60);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
}

void loop() {
start:
  //  delay(500);
  Servo1.write(60);

  if (Serial.available()) {
    t = Serial.read();
    //     Serial.println(t);
  }

  if (t == 'F') {          //move forward(all motors rotate in forward direction)
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
  }

  else if (t == 'B') {    //move reverse (all motors rotate in reverse direction)
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
  }

  else if (t == 'L') {    //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
  }

  else if (t == 'R') {    //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
  }

  else if (t == 'S') {    //STOP (all motors stop)
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }

  else if (t == 'V') {
    while (1)
    {
      digitalWrite(12, HIGH);
      digitalWrite(10, HIGH);
      if (Serial.available()) {
        t = Serial.read();
        //Serial.println(t);
        if (t == 'U')
        {
          digitalWrite(12, LOW);
          digitalWrite(11, LOW);
          digitalWrite(10, LOW);
          digitalWrite(9, LOW);
          // Make servo go to 60 degrees
          Servo1.write(60);
          goto start;
        }
      }
      // Make servo go to 0 degrees
      Servo1.write(0);
      delay(500);
      // Make servo go to 60 degrees
      Servo1.write(60);
      delay(500);
    }
  }

  else if (t == 'T') {
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);
    delay(100);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    t = 'S';
  }

  else if (t == 'Z') {
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);
    delay(110);
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);
    t = 'S';
  }

  else if (t == 'A') {
    dispTemp();
    t = 'S';
  }
}
