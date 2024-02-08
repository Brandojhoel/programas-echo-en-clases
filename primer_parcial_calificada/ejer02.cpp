/*2. Elaborar un programa que permita calcular el puntaje de un equipo de futbol luego de 20 partidos, por cada 
partido ganado el puntaje se incrementa en 3 puntos  y por cada partido empatado 1 punto y por cada partido perdido 0
puntos*/
#include <iostream>

using namespace std;

int main() {
  int ganados, empatados, perdidos, puntaje;

  // Solicita el número de partidos ganados, empatados y perdidos
  cout << "Ingrese el número de partidos ganados: ";
  cin >> ganados;

  cout << "Ingrese el número de partidos empatados: ";
  cin >> empatados;

  cout << "Ingrese el número de partidos perdidos: ";
  cin >> perdidos;

  // Calcula el puntaje
  puntaje = ganados * 3 + empatados;

  // Imprime el puntaje
  cout << "El puntaje total del equipo es: " << puntaje << endl;

  return 0;
}