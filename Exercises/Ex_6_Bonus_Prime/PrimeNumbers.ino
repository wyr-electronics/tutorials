void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i=1; i< 160; i++){
    if(IsPrime(i))
      Serial.println(i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}

bool IsPrime(unsigned int number){
  if(number == 1)
    return false;
  if(number == 2 || number ==3 || number == 5 || number == 7)
    return true;

  if(number % 2 == 0)
    return false;
  if(number % 3 == 0)
    return false;
  if(number % 5 == 0)
    return false;
  if(number % 7 == 0)
    return false;  
 return true;
}

