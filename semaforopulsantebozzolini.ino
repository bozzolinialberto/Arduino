int Ledrosso = 13;
int Ledgiallo = 11;
int Ledverde = 10;
int pulsante = 12;

void setup() {
  pinMode(Ledrosso, OUTPUT);
  pinMode(Ledgiallo, OUTPUT);
  pinMode(Ledverde, OUTPUT);
  pinMode(pulsante, INPUT);
}

void loop() {

  if (digitalRead(pulsante) == HIGH) {
    digitalWrite(Ledrosso, HIGH);
    digitalWrite(Ledgiallo, LOW);
    digitalWrite(Ledverde, LOW);
  } else {

    digitalWrite(Ledrosso, HIGH);
    digitalWrite(Ledgiallo, LOW);
    digitalWrite(Ledverde, LOW);

    delay(3000);

    digitalWrite(Ledrosso, LOW);
    digitalWrite(Ledgiallo, HIGH);
    digitalWrite(Ledverde, LOW);

    delay(1000);

    digitalWrite(Ledrosso, LOW);
    digitalWrite(Ledgiallo, LOW);
    digitalWrite(Ledverde, HIGH);

    delay(3000);
  }
}