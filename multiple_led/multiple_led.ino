
//multiple LED simulteneously
void setup() {
  // put your setup code here, to run once:

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //led A
  digitalWrite(9, HIGH);
  delay(900);
  digitalWrite(9, LOW);
  delay(800);

   //led B
  digitalWrite(8, HIGH);
  delay(900);
  digitalWrite(8, LOW);
  delay(900);

   //led C
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);

}
