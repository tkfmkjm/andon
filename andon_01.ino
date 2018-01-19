void setup(){
pinMode(10,OUTPUT); //Set pin 10 as output
}

void loop(){
int i;
  for (i=30;i<=255;i++){ //initialization; condition; increment or decrement
    analogWrite(10,i);
    delay(15); //set fading speed as 15(ms)
  }

  for (i=255;i<=30;i--){
    analogWrite(10,i);
    delay(15);
  }

}
