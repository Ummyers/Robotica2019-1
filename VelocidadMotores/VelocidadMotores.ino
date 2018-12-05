/* Robótica Semestre 2019-1
* Muñiz Patiño Andrea Fernanda
* Versión 1.0
* Prueba para regular la velocidad de los motores. 
*/

#define sensor 2 //Pin de lectura analogica 
int valor;
int motor1 = 9;
int motor2 = 10;
int segMotor1 = 13;
int segMotor2 = 12;

int value = 50;
int zero = 0; 
void setup() {
  pinMode(sensor, INPUT);
  
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(segMotor1, OUTPUT);
  pinMode(segMotor2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valor = analogRead(sensor);
  Serial.println(valor);
  delay(500);

  analogWrite(motor1, zero);
  analogWrite(motor2, value);

  analogWrite(segMotor1, zero);
  analogWrite(segMotor2, value);
  delay(10);
}
