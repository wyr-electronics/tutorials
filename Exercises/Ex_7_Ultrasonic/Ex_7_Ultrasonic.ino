int trigger = 6;
int echo = 7;
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {

  // :: Set up trigger
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);

  // :: Start measurement
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);

  // :: Get and convert to meters
  distance = pulseIn(echo, HIGH);
  distance = distance * 0.0001657;

  Serial.println(distance);
  delay(50);
}
