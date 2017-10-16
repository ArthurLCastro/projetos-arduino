// Display de 7 segmentos - Ânodo Comum
// Arthur L. Castro
// Outubro de 2017

#define tempo 500
byte i, n, digito = 0;     // Variáveis auxiliares
byte portas[8] = {2,3,4,5,6,7,8,9};
                           // a,b,c,d,e,f,g,dp
byte displayHex[16][8] = {{0,0,0,0,0,0,1,1},  // 0
                          {1,0,0,1,1,1,1,1},  // 1
                          {0,0,1,0,0,1,0,1},  // 2
                          {0,0,0,0,1,1,0,1},  // 3
                          {1,0,0,1,1,0,0,1},  // 4
                          {0,1,0,0,1,0,0,1},  // 5
                          {0,1,0,0,0,0,0,1},  // 6
                          {0,0,0,1,1,1,1,1},  // 7
                          {0,0,0,0,0,0,0,1},  // 8
                          {0,0,0,0,1,0,0,1},  // 9
                          {0,0,0,1,0,0,0,1},  // A
                          {1,1,0,0,0,0,0,1},  // b
                          {0,1,1,0,0,0,1,1},  // C
                          {1,0,0,0,0,1,0,1},  // d
                          {0,1,1,0,0,0,0,1},  // E
                          {0,1,1,1,0,0,0,1},  // F
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
