int led[3];

void setup()
{
  led[0] = 13;
  led[1] = 12;
  led[2] = 11;
  
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
}

void loop()
{
  digitalWrite(led[0], HIGH),
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  delay(3500);
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], HIGH);
  delay(2500);
  digitalWrite(led[0], LOW);
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], LOW);
  delay(1000);
}