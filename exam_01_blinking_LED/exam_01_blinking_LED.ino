const int LED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int delaytime = 2000;
//  digitalWrite(LED, HIGH); 
  analogWrite(9, 50); //3,5,6,9,10,11 pins can use analogWrite. 0~255
  delay(delaytime);
//  digitalWrite(LED, LOW);
  analogWrite(9, 0);
  delay(delaytime);
}
