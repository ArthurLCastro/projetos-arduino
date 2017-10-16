// Display de 7 segmentos - Cátodo Comum
// Arthur L. Castro
// Outubro de 2017

#define tempo 500
byte i, n, digito = 0;     // Variáveis auxiliares
byte portas[8] = {2,3,4,5,6,7,8,9};
                           // a,b,c,d,e,f,g,dp
byte displayHex[16][8] = {{1,1,1,1,1,1,0,0},  // 0
                          {0,1,1,0,0,0,0,0},  // 1
                          {1,1,0,1,1,0,1,0},  // 2
                          {1,1,1,1,0,0,1,0},  // 3
                          {0,1,1,0,0,1,1,0},  // 4
                          {1,0,1,1,0,1,1,0},  // 5
                          {1,0,1,1,1,1,1,0},  // 6
                          {1,1,1,0,0,0,0,0},  // 7
                          {1,1,1,1,1,1,1,0},  // 8
                          {1,1,1,1,0,1,1,0},  // 9
                          {1,1,1,0,1,1,1,0},  // A
                          {0,0,1,1,1,1,1,0},  // b
                          {1,0,0,1,1,1,0,0},  // C
                          {0,1,1,1,1,0,1,0},  // d
                          {1,0,0,1,1,1,1,0},  // E
                          {1,0,0,0,1,1,1,0},  // F
                         };
                            
void setup() {
  for(i=0;i<=7;i++){
    pinMode(portas[i],OUTPUT);
  }
}

void loop() {
  if(digito > 15){
    digito = 0;
  }
  for(n=0;n<=7;n++){
    digitalWrite(portas[n],displayHex[digito][n]); 
  }
  digito++;
  delay(tempo);
}
