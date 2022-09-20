#include <math.h>

#define led 2

void setup() {
 Serial.begin(9600);
 pinMode(led,OUTPUT);

}

double Termistor (int analogOkuma){
  double temp;
  temp = log(((10240000 / analogOkuma) - 100000));
  temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * temp * temp)) * temp);
  temp = temp -273.15;
  return temp;
}
void loop() {
  int value = analogRead(A0);
  double temp = Termistor(value);
  Serial.println(temp);
  if(temp > 30){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(250);
}
