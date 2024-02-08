#include <iostream>
/*5. El director de una escuela está organizando un viaje de estudios, y requiere determinar cuánto debe cobrar a cada 
alumno y cuánto debe pagar a la compañía de viajes por el servicio. La forma de cobrar es la siguiente: si son 100 alumnos o más, 
el costo por cada alumno es de $65.00; de 50 a 99 alumnos, el costo es de $70.00, de 30 a 49, de $95.00, y si son menos de 30, 
el costo de la renta del autobús es de $4000.00, sin importar el número de alumnos. Realice un algoritmo que permita determinar 
pago a la compañía de autobuses y lo que debe pagar cada alumno por el viaje. 
Al realizar un análisis del problema, se puede deducir que las variables que se requieren como datos son el número de alumnos (NA), 
con lo que se puede calcular el pago por alumno (PA) y el costo total del viaje (TOT)*/
using namespace std;

int main() {
  int na;
  float pa, tot;

  
  cout << "Ingrese el número de alumnos: ";
  cin >> na;

  
  if (na >= 100) {
    pa = 65;
  } else if (na >= 50) {
    pa = 70;
  } else if (na >= 30) {
    pa = 95;
  } else {
    pa = 4000 / na;s
  }

  tot = na * pa;

  cout << "El pago individual es $" << pa << endl;
  cout << "El pago total es $" << tot << endl;

  return 0;
}