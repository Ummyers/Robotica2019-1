/*Practica 02: 
  *  Muñiz Patiño Andrea Fernanda
  * 22/Agosto/2018
  * Versión 1.0
  * LEDS que prenden secuencialmente, ida y vuelta.
  * RECORDATORIO:
  * Los pines se enumeran 1-20, VCC es el 1.
*/
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() {
  digitalWrite(2, 0);    
  delay(x);                      
  digitalWrite(3, 0);
  delay(x);                       
  digitalWrite(4, 0);
  delay(x);
  digitalWrite(5, 0);
  delay(x);
  digitalWrite(6, 0);
  delay(x);
  
  digitalWrite(2, 1);    
  delay(x);                       
  digitalWrite(3, 1);
  delay(x);                       
  digitalWrite(4, 1);
  delay(x);
  digitalWrite(5, 1);
  delay(x);
  digitalWrite(6, 1);
  delay(x);
  
  digitalWrite(6,0);
  delay(x);
  digitalWrite(5,0);
  delay(x);
  digitalWrite(4,0);
  delay(x);
  digitalWrite(3,0);
  delay(x);
  digitalWrite(2,0);
  
}
