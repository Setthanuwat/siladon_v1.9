const int limitSwitchPin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(String(digitalRead(3)));
}
