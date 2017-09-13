// Expansão de I/Os Analógicas do Arduino - com Multiplexador 4051
// Arthur L. Castro
// Setembro de 2017

#define pinC 4
#define pinB 3
#define pinA 2

void setup() {
  pinMode(pinC,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinA,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int sensor1 = analogReadMUX(0);                  // Leitura Analógica do I/O 0 do MUX
  int sensor2 = analogReadMUX(1);                  // Leitura Analógica do I/O 1 do MUX
  int sensor3 = analogReadMUX(2);                  // Leitura Analógica do I/O 2 do MUX
  int sensor4 = analogReadMUX(3);                  // Leitura Analógica do I/O 3 do MUX
  int sensor5 = analogReadMUX(4);                  // Leitura Analógica do I/O 4 do MUX
  int sensor6 = analogReadMUX(5);                  // Leitura Analógica do I/O 5 do MUX
  int sensor7 = analogReadMUX(6);                  // Leitura Analógica do I/O 6 do MUX
  int sensor8 = analogReadMUX(7);                  // Leitura Analógica do I/O 7 do MUX

  Serial.print("Sensor 1: ");
  Serial.println(sensor1);
  Serial.print("Sensor 2: ");
  Serial.println(sensor2);
  Serial.print("Sensor 3: ");
  Serial.println(sensor3);
  Serial.print("Sensor 4: ");
  Serial.println(sensor4);
  Serial.print("Sensor 5: ");
  Serial.println(sensor5);
  Serial.print("Sensor 6: ");
  Serial.println(sensor6);
  Serial.print("Sensor 7: ");
  Serial.println(sensor7);
  Serial.print("Sensor 8: ");
  Serial.println(sensor8);
  Serial.println(" ");
  delay(100);
}

int analogReadMUX(int AX){
  #define pinMUX A0
  pinMode(pinMUX, INPUT);
  unsigned int leitura;                         // leitura 0 a 1023
  
// ---------- Chaveamento do Pino do MUX ----------
  switch(AX){
    case 0:
      digitalWrite(pinC, 0);
      digitalWrite(pinB, 0);
      digitalWrite(pinA, 0);
      break;
    case 1:
      digitalWrite(pinC, 0);
      digitalWrite(pinB, 0);
      digitalWrite(pinA, 1);
      break;
    case 2:
      digitalWrite(pinC, 0);
      digitalWrite(pinB, 1);
      digitalWrite(pinA, 0);
      break;
    case 3:
      digitalWrite(pinC, 0);
      digitalWrite(pinB, 1);
      digitalWrite(pinA, 1);
      break;
    case 4:
      digitalWrite(pinC, 1);
      digitalWrite(pinB, 0);
      digitalWrite(pinA, 0);
      break;
    case 5:
      digitalWrite(pinC, 1);
      digitalWrite(pinB, 0);
      digitalWrite(pinA, 1);
      break;
    case 6:
      digitalWrite(pinC, 1);
      digitalWrite(pinB, 1);
      digitalWrite(pinA, 0);
      break;
    case 7:
      digitalWrite(pinC, 1);
      digitalWrite(pinB, 1);
      digitalWrite(pinA, 1);
      break;
    default:
      Serial.println("Escolha um valor entre 0 e 7");
      break;
  }
  
// ---------- Leitura Analógica do Pino do MUX ----------
  leitura = analogRead(pinMUX);
  return leitura;
}
