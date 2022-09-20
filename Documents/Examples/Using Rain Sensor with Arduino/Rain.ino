int sensorPin = A0;                //Sensörü bağlayacağımız pin
int threshold_value = 100;              //Su miktarı için eşik değeri
int buzzerPin = 8;                 //Buzzerı bağlayacağımız pin
int veri;                          //Sensörden okuduğumuz değer

void setup() {
  pinMode(buzzerPin, OUTPUT);      //Buzzer bağladığımız pini OUTPUT olarak ayarlıyoruz.  
}
void loop() {
  veri = analogRead(sensorPin);    //Sensörden analog veriyi okuyoruz.
  if(veri > threshold_value){           //Sensör verisi eşik değerini geçerse if içerisindeki kodlar uygulanır.
    digitalWrite(buzzerPin, HIGH); 
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{                            //Sensör verisi eşik değerinden küçük olursa if içerisindeki kodlar uygulanır.
    digitalWrite(buzzerPin, LOW);
  }
}
