#define pot_pin A0

int value = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Reading Pot Value");

}

void loop() {
  value = analogRead(pot_pin);
  Serial.println(value);
  delay(300);
 
}
