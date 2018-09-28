/*Practica 04:
  * Muñiz Patiño Andrea Fernanda
  * 24/Agosto/2018
  * Versión 1.0
  * Sobre la práctica:
  * Presionar el botón prender un led, que se quede prendido
  * Si se vuelve a presionar apagar el botón. 
  */

boolean prendido;

void setup() {
  pinMode(5,INPUT_PULLUP); 
  pinMode(2,OUTPUT);
}
void loop() {
  while(!digitalRead(5)){
    if(prendido){
        digitalWrite(2,0);
      prendido = false;  
    }else{
      digitalWrite(2,1); 
      prendido = true; 
    }
  }
  /*El delay es opcional*/
  delay(100);
}
