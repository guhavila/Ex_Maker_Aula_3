#include <Servo.h>

Servo servo;
int pos = 0;
int increment = 1;

void setup() {
  servo.attach(9);  // Conecte o servo ao pino 9
}

void loop() {
  if (pos == 0 || pos == 180) {
    increment = -increment;  // Inverte a direção quando atinge os limites
  }
  
  pos += increment;
  servo.write(pos);
  delay(15);  // Ajuste a velocidade do movimento aqui
}

//Projeto 1: Servomotor acionado pelo código SWEEP da biblioteca do Arduino//