void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  if(Serial.available() > 0){
    Serial.write(Serial.read());
  }
  // put your main code here, to run repeatedly:
}
