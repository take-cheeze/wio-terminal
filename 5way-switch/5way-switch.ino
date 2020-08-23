void setup() {
  Serial.begin(115200);
  pinMode(WIO_5S_UP, INPUT_PULLUP);
  pinMode(WIO_5S_DOWN, INPUT_PULLUP);
  pinMode(WIO_5S_LEFT, INPUT_PULLUP);
  pinMode(WIO_5S_RIGHT, INPUT_PULLUP);
  pinMode(WIO_5S_PRESS, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("5 Way:");
  if (digitalRead(WIO_5S_UP) == LOW) {
    Serial.println("  5 Way Up");
  }
  if (digitalRead(WIO_5S_DOWN) == LOW) {
    Serial.println("  5 Way Down");
  }
  if (digitalRead(WIO_5S_LEFT) == LOW) {
    Serial.println("  5 Way Left");
  }
  if (digitalRead(WIO_5S_RIGHT) == LOW) {
    Serial.println("  5 Way Right");
  }
  if (digitalRead(WIO_5S_PRESS) == LOW) {
    Serial.println("  5 Way Press");
  }
  delay(200);
}
