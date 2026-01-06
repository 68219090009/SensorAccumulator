/* LAB6.1 DC MOTOR */
//https://app.cirkitdesigner.com/project/08ad7e50-c05a-4d61-a842-4e647fe5c8a4

#define motorPin 9

void setup() {
  pinMode(motorPin,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(motorPin,HIGH);
  delay(1000);
  digitalWrite(motorPin,LOW);
  delay(1000);

}
