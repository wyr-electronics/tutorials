#define BUTTON_PIN 2
#define LED_PIN 3
void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  //digitalWrite(BUTTON_PIN, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON_PIN) == LOW){
    digitalWrite(LED_PIN, HIGH);
  }
  else{
    digitalWrite(LED_PIN, LOW);
  }
}
