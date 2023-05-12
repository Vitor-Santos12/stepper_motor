#include "Arduino.h"
#include "SPI.h"
#include "Wire.h"

// Projeto 12 - Motor de passo controlado por Arduino

// Declarando variáveis para os pinos do motor

extern int motorPin1; 
extern int motorPin2; 
extern int motorPin3; 
extern int motorPin4;
extern int contagem;
extern int passosPorRotacao; 

// Funções declaradas em outra página

extern void sentidoAntiHorario();
extern void sentidoHorario();
extern void setOutPut();


void setup() {

// Declara os pinos do motor como pinos de saída

pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
pinMode(motorPin3, OUTPUT);
pinMode(motorPin4, OUTPUT);
Serial.begin(9600);
}

void loop(){
// Stepper Motor
if(contagem < passosPorRotacao )
sentidoHorario(); // Função para rotacionar em sentido horário
else if (contagem == passosPorRotacao * 2)
contagem = 0;
else
sentidoAntiHorario(); // Função para rotacionar em sentido anti horário
contagem++;
}


	

 

 
