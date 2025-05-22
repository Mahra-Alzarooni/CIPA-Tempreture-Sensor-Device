#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int whiteLED = 3;
int yellowLED = 4;
int greenLED = 5;
int redLED = 6;

void setup() {
  dht.begin();
  pinMode(whiteLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  float temp = dht.readTemperature();

  digitalWrite(whiteLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, LOW);
  digitalWrite(redLED, LOW);

  if (isnan(temp)) return;

  if (temp < 20) {
    digitalWrite(whiteLED, HIGH);
  } else if (temp >= 20 && temp <= 26) {
    digitalWrite(yellowLED, HIGH);
  } else if (temp >= 27 && temp <= 32) {
    digitalWrite(greenLED, HIGH);
  } else {
    digitalWrite(redLED, HIGH);
  }

  delay(2000);
}