
int Ledrosso1 = 1;
int Ledgiallo1 = 2;
int Ledverde1 = 3;


int Ledrosso2 = 4;
int Ledgiallo2 = 5;
int Ledverde2 = 6;

int Ledrosso3 = 7;
int Ledgiallo3 = 8;
int Ledverde3 = 9;

int Ledrosso4 = 10;
int Ledgiallo4 = 11;
int Ledverde4 = 12;

void setup() {
  pinMode(Ledrosso1, OUTPUT);
  pinMode(Ledgiallo1, OUTPUT);
  pinMode(Ledverde1, OUTPUT);

  pinMode(Ledrosso2, OUTPUT);
  pinMode(Ledgiallo2, OUTPUT);
  pinMode(Ledverde2, OUTPUT);

  pinMode(Ledrosso3, OUTPUT);
  pinMode(Ledgiallo3, OUTPUT);
  pinMode(Ledverde3, OUTPUT);

  pinMode(Ledrosso4, OUTPUT);
  pinMode(Ledgiallo4, OUTPUT);
  pinMode(Ledverde4, OUTPUT);
}

void loop() {

  digitalWrite(Ledrosso1, HIGH);
  digitalWrite(Ledgiallo1, LOW);
  digitalWrite(Ledverde1, LOW);

  digitalWrite(Ledrosso2, LOW);
  digitalWrite(Ledgiallo2, LOW);
  digitalWrite(Ledverde2, HIGH);

  digitalWrite(Ledrosso3, HIGH);
  digitalWrite(Ledgiallo3, LOW);
  digitalWrite(Ledverde3, LOW);

  digitalWrite(Ledrosso4, LOW);
  digitalWrite(Ledgiallo4, LOW);
  digitalWrite(Ledverde4, HIGH);

  delay(3000);

  digitalWrite(Ledrosso1, HIGH);
  digitalWrite(Ledgiallo1, LOW);
  digitalWrite(Ledverde1, LOW);

  digitalWrite(Ledrosso2, LOW);
  digitalWrite(Ledgiallo2, HIGH);
  digitalWrite(Ledverde2, LOW);

  digitalWrite(Ledrosso3, HIGH);
  digitalWrite(Ledgiallo3, LOW);
  digitalWrite(Ledverde3, LOW);

  digitalWrite(Ledrosso4, LOW);
  digitalWrite(Ledgiallo4, HIGH);
  digitalWrite(Ledverde4, LOW);

  delay(1000);

  digitalWrite(Ledrosso1, LOW);
  digitalWrite(Ledgiallo1, LOW);
  digitalWrite(Ledverde1, HIGH);

  digitalWrite(Ledrosso2, HIGH);
  digitalWrite(Ledgiallo2, LOW);
  digitalWrite(Ledverde2, LOW);

  digitalWrite(Ledrosso3, LOW);
  digitalWrite(Ledgiallo3, LOW);
  digitalWrite(Ledverde3, HIGH);

  digitalWrite(Ledrosso4, HIGH);
  digitalWrite(Ledgiallo4, LOW);
  digitalWrite(Ledverde4, LOW);

  delay(3000);

  digitalWrite(Ledrosso1, LOW);
  digitalWrite(Ledgiallo1, HIGH);
  digitalWrite(Ledverde1, LOW);

  digitalWrite(Ledrosso2, HIGH);
  digitalWrite(Ledgiallo2, LOW);
  digitalWrite(Ledverde2, LOW);

  digitalWrite(Ledrosso3, LOW);
  digitalWrite(Ledgiallo3, HIGH);
  digitalWrite(Ledverde3, LOW);

  digitalWrite(Ledrosso4, HIGH);
  digitalWrite(Ledgiallo4, LOW);
  digitalWrite(Ledverde4, LOW);

  delay(1000);

}