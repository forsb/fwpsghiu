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
