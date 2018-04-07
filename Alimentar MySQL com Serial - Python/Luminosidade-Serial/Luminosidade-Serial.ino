// Alimentar MySQL com dados lidos da Porta Serial
// Arthur Castro
// 07 de abril de 2018

#define LUM_PIN A0
#define tempo 500               //Tempo entre leituras (em ms)

int lum = 0, lumPercent = 0;

void setup() {
  pinMode(LUM_PIN, INPUT);      // Define A0 como entrada 
  Serial.begin(9600);           //Inicia comunicação serial    
}
 
void loop() {
  lum = analogRead(LUM_PIN);
  lumPercent = map(lum,0,1023,0,100);
  
  Serial.println(lumPercent);

  delay(tempo);
}
