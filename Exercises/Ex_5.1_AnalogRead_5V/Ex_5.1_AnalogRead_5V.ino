void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(14, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead(14);
  Serial.println(reading);
  delay(1000);
}
