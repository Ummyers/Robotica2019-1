/* Practica 02:
    Muñiz Patiño Andrea Fernanda
    23/Agosto/2018
    Versión 1.0
    Sobre la práctica:
    LEDS que incrementan velocidad para prender, estos prenden en forma secuencial.
    RECORDATORIO:
    La velocidad se mide en nanosegundos, 1000 = 1 seg.
*/

/*VELOCIDAD con la que prenden los LEDS*/
int x = 1000;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
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

  digitalWrite(6, 0);
  delay(x);
  digitalWrite(5, 0);
  delay(x);
  digitalWrite(4, 0);
  delay(x);
  digitalWrite(3, 0);
  delay(x);
  digitalWrite(2, 0);
  /* X es la velocidad
      Esta se va incrementando hasta llegar a un punto, y resestablecerse
  */
  x -= 75;
  if (x <= 50) {
    x = 500;
  }
}


