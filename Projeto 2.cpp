#include <Servo.h>

Servo servo;
int pos = 0;
int servoAngle;

const int button1Pin = 2;
const int button2Pin = 3;
const int button3Pin = 4;

void setup() {
  servo.attach(9);  // Conecte o servo ao pino 9
  pinMode(button1Pin, INPUT_PULLUP);
  pinMode(button2Pin, INPUT_PULLUP);
  pinMode(button3Pin, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(button1Pin) == LOW) {
    servoAngle = 0;
  } else if (digitalRead(button2Pin) == LOW) {
    servoAngle = 30;
  } else if (digitalRead(button3Pin) == LOW) {
    servoAngle = 60;
  }
  
  servo.write(servoAngle);
  delay(15);  // Ajuste a velocidade do movimento aqui
}

//Projeto 2: Servomotor posicionando nos ângulos 0 a 30° e 60° em função do acionamento de três botões//