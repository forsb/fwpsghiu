#include "dht.h"

#define PIN_PHOTO     0
#define PIN_PHOTO_POW 5

#define PIN_DHT_SDA   12
#define PIN_DHT_POW   13

int val = 0;

void setup()
{
  pinMode(5, OUTPUT);
  digitalWrite(5, HIGH);
  
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(0);
  Serial.println(val);

  delay(500);
}
