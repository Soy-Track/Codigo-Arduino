#include "Ultrasonic.h" // Importando a biblioteca do sensor ultrassônico

const int PINO_TRIGGER = 12; // Pino responsável por enviar o sinal ultrassônico  
const int PINO_ECHO = 13; // Pino responsável por receber o retorno do sinal  

HC_SR04 sensor(PINO_TRIGGER, PINO_ECHO); // Inicializa o sensor ultrassônico com os pinos de disparo (trigger) e recepção (echo)

void setup() { // Estrutura de inicialização
  Serial.begin(9600); // Definindo a taxa de bits para comunicação da máquina com o arduino
}

void loop() { // Estrutura de repetição
  Serial.println((sensor.distance() / 100.0) * 30); // // Exibe o valor 'mockado' (simulado) da distância em metros

  delay(1000); // Pausa o código em 1000 milissegundos antes da próxima repetição
}