/* Practica 03:
    Muñiz Patiño Andrea Fernanda
    23/Agosto/2018
    Versión 1.0
    Sobre la práctica:
    El boton que esta en el microcontrolador se programa para encender un led cuando se presione. 
    RECORDATORIO: 
    El método digitalRead solo recibe como parametró el pin que hara la lectura. 
*/

void setup() {
  pinMode(5,INPUT_PULLUP); 
  pinMode(14,OUTPUT);
}

void loop() {
  while(!digitalRead(5)){
    digitalWrite(14,HIGH);    
  }
    digitalWrite(14,LOW);  
}
