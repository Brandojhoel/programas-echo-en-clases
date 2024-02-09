/*1. Escriba un programa que simule el juego de adivinar un número. El programa deberá
generar un número aleatorio entre 1 y 100 y pedirle al usuario que adivine cuál es. Si el
usuario ingresa un número incorrecto, el programa deberá indicarle si el número a adivinar
es mayor o menor al que ingresó. El juego termina cuando el usuario adivina el número
correcto.  se debe almacenar los intentos y el numero maximo de intentos es 5. cuando el usuario
exceda los intentos el aplicativo debe mostrar una alerta y terminar el program*/
#include <time.h>
#include <stdlib>
#include <iostream>
using namespace std;

int main() {
  int numeroAleatorio, numeroUsuario, intentos = 0;

  // Generar un número aleatorio entre 1 y 100
  srand(time(NULL));
  numeroAleatorio = 1 + rand() % 100;

  // Bucle principal del juego
  while (intentos < 5 && numeroUsuario != numeroAleatorio) {
    cout << "Ingrese un número entre 1 y 100: ";
    cin >> numeroUsuario;

    intentos++;

    if (numeroUsuario < numeroAleatorio) {
      cout << "El número a adivinar es mayor." << endl;
    } else if (numeroUsuario > numeroAleatorio) {
      cout << "El número a adivinar es menor." << endl;
    }
  }

  // Mostrar el resultado del juego
  if (intentos < 5) {
    cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << endl;
  } else {
    cout << "Lo siento, has excedido el número máximo de intentos. El número era " << numeroAleatorio << endl;
  }

  return 0;
}