#define button 8
#define led 10

int button_state = 0;


void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);

}

void loop() {
  button_state = digitalRead(button) ;
  if(button_state == 1){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}
