#define led 3

void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light_value = analogRead(A0);
  Serial.println(light_value);
  delay(50);
  if(light_value > 900){
    digitalWrite(led,LOW);
  }
  if(light_value < 850){
    digitalWrite(led,HIGH);
  }

}
