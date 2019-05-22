void setup() {
  pinMode(4,OUTPUT);
  pinMode(13,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(100);
  // put your main code here, to run repeatedly:

}
