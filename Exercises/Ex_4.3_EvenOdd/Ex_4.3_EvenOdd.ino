/*Create a program where the Arduino asks for an input and
it will display whether the input is an odd/even or not a number*/

void setup(){
  Serial.begin(9600);
  
}

void loop(){
  if(Serial.available() > 0){
     int input = Serial.parseInt();
     if(IsEven(input))
      Serial.println("Even");
     else
      Serial.println("Odd");
  }
}

bool IsEven(int num){
  if(num % 2 == 0)
    return true;
  return false;
}

