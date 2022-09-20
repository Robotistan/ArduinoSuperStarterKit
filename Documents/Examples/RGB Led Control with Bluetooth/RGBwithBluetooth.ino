int received_data;
int red_pin = 9;
int green_pin = 10 ;
int blue_pin = 11;
void setup() {
  Serial.begin(9600);
  pinMode(red_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    received_data = Serial.read();
  }
  if(received_data == 'k'){
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,HIGH);
  }
  else if(received_data == 'y'){
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,LOW);
    digitalWrite(blue_pin,HIGH);
}
  else if(received_data == 'm'){
    digitalWrite(red_pin,LOW);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,HIGH);
}
  else{
    digitalWrite(red_pin,HIGH);
    digitalWrite(green_pin,HIGH);
    digitalWrite(blue_pin,HIGH);
  }
}
