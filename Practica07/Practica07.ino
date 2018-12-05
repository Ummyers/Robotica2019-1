/*Practica 07:
  * Muñiz Patiño Andrea Fernanda
  * 29/Agosto/2018
  * Versión 1.0
  * Sobre la práctica:
  * Prendiendo un led, dependiendo de 
  * la variación del potenciometro 
  */
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600); // estableces la comunicación serial
  //A una velocidad de 9600, que es lo mas rapido que puede el MSP
  pinMode(2,OUTPUT);
}


void loop() {
  // A3 = P1.3
  int sensorValue = analogRead(A3);
  Serial.println(sensorValue); //Imprime en pantalla el valor
  delay(1); // delay in between reads for stability

  if((sensorValue > 1 )&&(sensorValue < 512)){
    digitalWrite(2,1);
  }else{
    digitalWrite(2,0);
  }
}
