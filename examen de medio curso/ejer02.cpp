/*2. El banco “TingoBank” ha decidido aumentar el límite de crédito de las tarjetas de sus clientes,
para esto considera que si su cliente tiene tarjeta tipo 1, el aumento será de 25 %;
si tiene tipo 2, será de 35 %;
si tiene tipo 3, de 40 %, y para cualquier otro tipo, de 50 %.
Si la persona tiene deuda con el banco solo se le dará la mitad de incremento de los clientes que no tienen deuda para clientes 1 y 2,
el resto no tiene incremento. se debe realizar un sistema para que calcule el tipo e indique cual sera el aumento del cliente. usar arreglos
y struct*/
#include <iostream>
#include <vector>

using namespace std;

struct Cliente{
  int tipoTarjeta;
  bool tieneDeuda;
  double limiteActual;
  double aumento;
};

double calcularAumento(Cliente cliente) {
  double porcentajeAumento;

  
  switch (cliente.tipoTarjeta) {
    case 1:
      porcentajeAumento = 0.25;
      break;
    case 2:
      porcentajeAumento = 0.35;
      break;
    case 3:
      porcentajeAumento = 0.40;
      break;
    default:
      porcentajeAumento = 0.50;
      break;
  }

  
  if (cliente.tieneDeuda) {
    if (cliente.tipoTarjeta == 1 || cliente.tipoTarjeta == 2) {
      porcentajeAumento /= 2;
    } else {
      return 0;
    }
  }

  
  return cliente.limiteActual * porcentajeAumento;
}


int main() {
  
  int tipoTarjeta;
  bool tieneDeuda;
  double limiteActual;

  cout << "Ingrese el tipo de tarjeta (1, 2, 3 o 4): ";
  cin >> tipoTarjeta;

  
  cout << "¿Tiene deuda con el banco? (Sí/No): ";
  string respuestaDeuda;
  cin >> respuestaDeuda;
  tieneDeuda = (respuestaDeuda == "Sí");

  cout << "Ingrese el límite actual de su tarjeta: ";
  cin >> limiteActual;

  
  Cliente cliente = {tipoTarjeta, tieneDeuda, limiteActual, 0};

  
  cliente.aumento = calcularAumento(cliente);

 
  cout << "El aumento de su límite de crédito es de: " << cliente.aumento << endl;

  return 0;
}