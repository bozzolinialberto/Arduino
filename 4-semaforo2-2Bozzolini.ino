int rosso[]  = {1, 4, 7, 10};
int giallo[] = {2, 5, 8, 11};
int verde[]  = {3, 6, 9, 12};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(rosso[i],  OUTPUT);
    pinMode(giallo[i], OUTPUT);
    pinMode(verde[i],  OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 4; i++) {
    if (i == 0 || i == 2) {
      digitalWrite(rosso[i],  HIGH);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  LOW);
    } else {
      digitalWrite(rosso[i],  LOW);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  HIGH);
    }
  }
  delay(3000);

  for (int i = 0; i < 4; i++) {
    if (i == 0 || i == 2) {
      digitalWrite(rosso[i],  HIGH);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  LOW);
    } else {
      digitalWrite(rosso[i],  LOW);
      digitalWrite(giallo[i], HIGH);
      digitalWrite(verde[i],  LOW);
    }
  }
  delay(1000);

  for (int i = 0; i < 4; i++) {
    if (i == 0 || i == 2) {
      digitalWrite(rosso[i],  LOW);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  HIGH);
    } else {
      digitalWrite(rosso[i],  HIGH);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  LOW);
    }
  }
  delay(3000);

  for (int i = 0; i < 4; i++) {
    if (i == 0 || i == 2) {
      digitalWrite(rosso[i],  LOW);
      digitalWrite(giallo[i], HIGH);
      digitalWrite(verde[i],  LOW);
    } else {
      digitalWrite(rosso[i],  HIGH);
      digitalWrite(giallo[i], LOW);
      digitalWrite(verde[i],  LOW);
    }
  }
  delay(1000);

}