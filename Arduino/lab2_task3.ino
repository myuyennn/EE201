void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(digitalRead(0));
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(0) == HIGH) {
    Serial.println("Hello World");
    delay(1000);
  }  else {
      Serial.println("It's 2023");
      delay(1000);
  }

}
