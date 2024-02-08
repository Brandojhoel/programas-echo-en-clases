/*3. Elaborar un programa que el incentivo que recibira un operario a lo largo de su semana laboral (lunes a sabado), se conoce
que la produccion minimo es 100 unidades.*/  


#include <iostream>

using namespace std;

int main() {
  int produccion, incentivo;

  cout << "Ingrese la producción del operario (unidades): ";
  cin >> produccion;

  
  incentivo = (produccion - 100) * 0.1;

  cout << "El incentivo del operario es: " << incentivo << endl;

  return 0;
}



 