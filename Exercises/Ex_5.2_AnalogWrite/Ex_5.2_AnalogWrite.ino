bool isIncreasing = true;
int outputValue=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  analogWrite(3, 0);
}

void loop() {
  if(isIncreasing){
    if(outputValue < 255)
      analogWrite(3,outputValue++);
    else
      isIncreasing = false;
  } 
  else{
    if(outputValue > 0)
      analogWrite(3,outputValue--);
    else
      isIncreasing = true;
  }
  delay(1);
}
