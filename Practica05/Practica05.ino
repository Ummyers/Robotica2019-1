/*Practica 05:
  * Muñiz Patiño Andrea Fernanda
  * 27/Agosto/2018
  * Versión 1.0
  * Sobre la práctica:
  * Usamos interrupciones para el encendido y el apagado de un LED
  * NOTA: no se terminó esta práctica.
  */

volatile boolean prendido;

void setup() {
  pinMode(5,INPUT_PULLUP); 
  pinMode(2,OUTPUT);

  attachInterrupt(digitalPinToInterrupt(5),encendidoApagado,CHANGE); 

  
}
void loop() {
  
  
}

void encendidoApagado(){
   if(prendido){
        digitalWrite(2,0);
      prendido = false;  
    }else{
      digitalWrite(2,1); 
      prendido = true; 
    }
}

