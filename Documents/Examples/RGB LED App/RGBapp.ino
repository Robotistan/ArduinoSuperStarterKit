int pot_pin = A0;
int pot_value = 0;

int red_pin = 9;
int green_pin = 10;
int blue_pin = 11;

int red_value = 0;
int green_value = 0;
int blue_value = 0;


void setup() {
  pinMode(red_pin,OUTPUT);
  pinMode(green_pin,OUTPUT);
  pinMode(blue_pin,OUTPUT);

}

void loop() {
  pot_value = analogRead(pot_pin);

  if(pot_value < 341) {
    pot_value = (pot_value*3)/4;

    red_value = 255- pot_value;
    green_value = pot_value;
    blue_value = 0;
  }
  else if(pot_value < 682){
     pot_value = (pot_value-341)*3/4;

     red_value = 0;
     green_value = 255- pot_value;
     blue_value = pot_value;
  }
  else{
    pot_value = (pot_value-683)*3/4;

     red_value = pot_value;
     green_value = 0;
     blue_value = 255-pot_value;
  }
  analogWrite(red_pin, 255-red_value);
  analogWrite(green_pin, 255-green_value);
  analogWrite(blue_pin, 255-blue_value);

}
