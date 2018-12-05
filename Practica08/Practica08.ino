/*Practica 08:
  * Muñiz Patiño Andrea Fernanda
  * 29/Agosto/2018
  * Versión 1.0
  * Sobre la práctica:
  * Usar una señal analogíca para prender un LED.
  */

int x =0;
boolean tope = false;

void setup() {
  pinMode(5,OUTPUT);
}

void loop() {
  if(!tope){
    x += 10;
  }
  analogWrite(5,x);
  delay(500);
   if(x > 230){
     tope = true;
   }
   if(tope){
    x-= 10;
      if(x < 20){
        tope = false;
      }
   }
}
