void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT)
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000);
  digitalWrite(13, LOW;
  digitalWrite(12, HIGH);
  delay(1000);
}
