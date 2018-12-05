/* Practica 10 
* Muñiz Patiño Andrea Fernanda
* Versión 1.0
* Sobre la práctica: 
* Sensor infrarrojo, que dado el valor del sensor muevo el motor. 
*/
#define motor1 5
#define motor2 7
#define segMotor1 14
#define segMotor2 19
#define sensor 6 //Pin de lectura analogica
//Cuando hago lecturas analogicas no puedo usar los pines 3,4. 
int valor;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(segMotor1, OUTPUT);
  pinMode(segMotor2, OUTPUT);
  Serial.begin(9600);
}
//Para los motores se usa DigitalWrite para indicar solo prendido y apagado
//Para darle velocidad hay que usar analogWrite

void loop() {
  valor = analogRead(sensor);
  Serial.println(valor);
  delay(500);
  if(valor < 50){
     digitalWrite(5, 0);
     digitalWrite(7, 1);
     //OTRO MOTOR
     digitalWrite(14,0);
     digitalWrite(19,1); 
  }else{
     digitalWrite(5, 1);
     digitalWrite(7, 0);
     //OTRO MOTOR
     digitalWrite(14,1);
     digitalWrite(19,0);
  }
  
}
