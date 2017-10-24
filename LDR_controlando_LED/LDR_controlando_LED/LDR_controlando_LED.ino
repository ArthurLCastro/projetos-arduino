// LDR controlando LED
// Arthur L. Castro
// SNCT 2017 - IFPE Campus Recife

#define led 9                                       // Pino 9 renomeado como "led"
#define ldr A0                                      // Pino A0 renomeado como "ldr"
#define luzMinima 40                                // Definição do mínimo percentual de luz para o LED ser ligado

void setup() {
  pinMode(led,OUTPUT);                              // Pino "led" definido como saída
  pinMode(ldr,INPUT);                               // Pino "ldr" definido como entrada
  Serial.begin(9600);                               // Início da comunicação Serial com baud rate de 9600
}

void loop() {
  int leitura, leituraPercent;                      // Declaração de variáveis
  
  leitura = analogRead(ldr);                        // Leitura analógica do pino "ldr" e atribuição do valor lido à variável "leitura"
  leituraPercent = map(leitura,0,1023,0,100);       // Conversão da "leitura" (de 0 a 1023) para valor percentual (de 0 a 100)

// Comparação entre o valor percentual da luminosidade ambiente e o nível mínimo preestabelecido (luzMinima)
  if(leituraPercent >= luzMinima){                  // Se o valor da luminosidade ambiente for maior ou igual à "luzMinima"...
    digitalWrite(led, LOW);                         // O LED é desligado(0V)
  } else {                                          // Senão...
    digitalWrite(led, HIGH);                        // O LED é ligado (5V) 
  }

//Imprime no Monitor Serial o valor da Luminosidade Ambiente lido pelo LDR, em Percentual
  Serial.print("Luminosidade do Ambiente: ");
  Serial.print(leituraPercent);
  Serial.println("%");
 
  delay(100);                                       // Tempo de 100ms para voltar ao início do loop
}
