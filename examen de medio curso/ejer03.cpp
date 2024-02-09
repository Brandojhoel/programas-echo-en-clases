/*3. Hacer un programa para ayudar a un trabajador a saber cuál será su sueldo semanal (funcion), se sabe que, si trabaja 40 horas o menos,
se le pagará $20 por hora, pero si trabaja más de 40 horas entonces las horas extras se le pagarán a $25 por hora.*/
#include <iostream>

using namespace std;

int main() {
  // Declarar variables para almacenar las horas trabajadas y el sueldo
  int horasTrabajadas;
  double sueldo;

  // Solicitar al usuario las horas trabajadas
  cout << "Ingrese las horas trabajadas en la semana: ";
  cin >> horasTrabajadas;

  // Calcular el sueldo
  if (horasTrabajadas <= 40) {
    sueldo = horasTrabajadas * 20;
  } else {
    sueldo = (40 * 20) + ((horasTrabajadas - 40) * 25);
  }

  // Mostrar al usuario el sueldo
  cout << "El sueldo semanal es de: $" << sueldo << endl;

  return 0;
}