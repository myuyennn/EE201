void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(12, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(100);


}
