#include <Servo.h>

Servo servo;
int potPin = A0;
int potValue;

void setup() {
  servo.attach(9);  // Conecte o servo ao pino 9
  Serial.begin(9600);
}

void loop() {
  potValue = analogRead(potPin);
  int servoAngle = map(potValue, 0, 1023, 0, 180);
  servo.write(servoAngle);

  // Envie o valor do potenciômetro para o monitor serial
  Serial.print("Potenciômetro: ");
  Serial.print(potValue);
  Serial.print(" | Ângulo do Servo: ");
  Serial.println(servoAngle);
  
  delay(15);  // Ajuste a velocidade do movimento aqui
}


//Projeto 3: Servomotor acionado por potenciômetro (monitor e plotter serial)//