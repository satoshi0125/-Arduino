void setup() {
  // put your setup code here, to run once:

//time buzzer of kakko
  for(int i=0; i<2; i=i+1) {
    tone(8, 1220);
    delay(200);
    noTone(8);
    delay(200);

    tone(8, 980);
    delay(600);
    noTone(8);
    delay(500);
  }

////time buzzer of NHK
//  for (int i=0; i<3; i++){
//    tone(8, 440);
//    delay(100);
//    noTone(8);
//    delay(900);
//  }
//  tone(8, 880);
//  delay(1300);
//  noTone(8);


}

void loop() {
  // put your main code here, to run repeatedly:
//buzzer of kyuukyusya
//  tone(8, 960);
//  delay(500);
//  tone(8, 770);
//  delay(500);
}
