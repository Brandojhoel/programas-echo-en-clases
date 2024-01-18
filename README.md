/*1. Elaborar un programa que solicite el numero de respuestas de un postulante, por cada respuesta correcta
se incrementa su puntaje en 4, por cada respuesta incorrecta -2 y por cada respuesta en blanco 0, se pide calcular 
el puntaje total del postulante de una prueba de 20 preguntas*/
#include <iostream>

using namespace std;

int main() {
  int correctas, incorrectas, enBlanco, puntaje;

  
  cout << "Ingrese el número de respuestas correctas: ";
  cin >> correctas;

  cout << "Ingrese el número de respuestas incorrectas: ";
  cin >> incorrectas;

  cout << "Ingrese el número de respuestas en blanco: ";
  cin >> enBlanco;
  
  puntaje = 4 * correctas - 2 * incorrectas - enBlanco;

  cout << "El puntaje total del postulante es: " << puntaje << endl;

  return 0;
}
