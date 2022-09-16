int leds[] = {2,3,4,5,6,7};

void setup() {
  for(int i=0; i<6; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for(int j=0; j<6; j--){
    digitalWrite(leds[j],HIGH);
    delay(80);
    digitalWrite(leds[j],LOW);
  }
  

}
