// 10 blue // 9 green // 8 red
// All trigger LOW

void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10,LOW);
  delay(1000);
  digitalWrite(10,HIGH);
 
  delay(2000);
 
  digitalWrite(9,LOW);
  delay(1000);
  digitalWrite(9,HIGH);

  delay(2000);

  digitalWrite(8,LOW);
  delay(1000);
  digitalWrite(8,HIGH);

  delay(5000);

}
