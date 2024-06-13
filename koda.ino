int rele = 8;
int B4 = 7;
int B3 = 6;
int B2 = 5;
int led = 4;

int counter = 0;

void setup()
{
  pinMode(rele, OUTPUT);
  pinMode(B4, INPUT);
  pinMode(B3, INPUT);
  pinMode(B2, INPUT);  
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(B2) == HIGH && counter == 0) {
    digitalWrite(led, HIGH);
    counter = 1;
  } else if (digitalRead(B2)  == HIGH && counter == 3) {
    digitalWrite(led, LOW);
    counter = 0;
  }
  if (digitalRead(B3) == HIGH && counter == 1) {
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(rele, HIGH);
    counter = 2;
  }
  if (digitalRead(B4) == HIGH && counter == 2) {
    digitalWrite(rele, LOW);
    counter = 3;
    delay(1000);
    digitalWrite(led, HIGH);
  }
  
}
