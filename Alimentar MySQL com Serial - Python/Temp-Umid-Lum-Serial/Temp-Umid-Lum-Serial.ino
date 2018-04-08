// Alimentar MySQL com dados lidos da Porta Serial 2
// Arthur Castro
// 08 de abril de 2018

#include <DHT.h>

#define LUM_PIN A0
#define tempo 500               //Tempo entre leituras (em ms)
#define DHTPIN 8
#define DHTTYPE DHT22

String sinais;                  // Variável usada para enviar os sinais
int lum = 0, lumPercent = 0;

DHT dht(DHTPIN, DHTTYPE);
float temp;
float umid;

void setup() {
  pinMode(LUM_PIN, INPUT);      // Define A0 como entrada
  dht.begin();
  Serial.begin(9600);           //Inicia comunicação serial
}
 
void loop() {
  lum = analogRead(LUM_PIN);
  lumPercent = map(lum,0,1023,0,100);
  
  temp = dht.readTemperature();
  umid = dht.readHumidity();

  sinais = String(lumPercent) + "|" + String(temp) + "|" + String(umid);
  Serial.println(sinais);

  delay(tempo);
}
