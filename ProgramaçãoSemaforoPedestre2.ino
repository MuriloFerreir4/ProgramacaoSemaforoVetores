int led[5];

void setup()
{
  led[0] = 13;
  led[1] = 12;
  led[2] = 11;
  led[3] = 2; // VERDE pedestre
  led[4] = 1; // VERMELHO pedestre
  
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
}

void loop()
{
  digitalWrite(led[0], HIGH); //VERMELHO ACESO
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], HIGH);
  digitalWrite(led[4], LOW);
  delay(3000);
  delay (250);
  digitalWrite(led[3], LOW);
  delay (250);
  digitalWrite(led[3], HIGH);
  delay (250);
  digitalWrite(led[3], LOW);
  delay (250);
  digitalWrite(led[3], HIGH);
  delay(250);
  digitalWrite(led[0], LOW); //VERDE ACESO
  digitalWrite(led[1], LOW);
  digitalWrite(led[2], HIGH);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], HIGH);
  delay(2500);
  digitalWrite(led[0], LOW);  //AMARELO ACESO
  digitalWrite(led[1], HIGH);
  digitalWrite(led[2], LOW);
  digitalWrite(led[3], LOW);
  digitalWrite(led[4], HIGH);
  delay(1500);
}