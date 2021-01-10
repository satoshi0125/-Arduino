const int buzzer =13;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2)==LOW)
  {
    digitalWrite(buzzer, HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }
}
