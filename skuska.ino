int i = 0;

void setup(){

  Serial.begin(9600);
}

void loop(){
  i++;
  Serial.print(i);
  delay(2000);
}

