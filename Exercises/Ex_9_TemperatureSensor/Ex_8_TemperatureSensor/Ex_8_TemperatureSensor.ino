int inputPin = 16;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() {

  unsigned int value = analogRead(inputPin);
  float mv = ( value/1023.0) * 5000; 
  float cel = mv/10;

  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  
  delay(1000);
}
