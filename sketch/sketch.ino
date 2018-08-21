#include "dht.h"

#define PIN_PHOTO     0
#define PIN_PHOTO_POW 5

#define PIN_DHT_SDA   12
#define PIN_DHT_POW   13

int val = 0;

dht DHT;

void setup()
{
  pinMode(PIN_PHOTO_POW, OUTPUT);
  digitalWrite(PIN_PHOTO_POW, HIGH);

  pinMode(PIN_DHT_POW, OUTPUT);
  digitalWrite(PIN_DHT_POW, HIGH);
  
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(PIN_PHOTO);
  Serial.println(val);
  
  // --- DHT22 ---
  int chk = DHT.read22(PIN_DHT_SDA);
  
  if (chk != DHTLIB_OK) {
    Serial.println("DHT error."); 
    //Serial.println(chk);
  }
  else {
    Serial.print(DHT.humidity, 1);
    Serial.print(",\t");
    Serial.println(DHT.temperature, 1);
  }
  

  delay(3000);
}
