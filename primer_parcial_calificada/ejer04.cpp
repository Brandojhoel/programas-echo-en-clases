/*4. elaborar un programa que calcule el area de un triangulo conociendo sus 3 lados e identifique que tipo de triangulo*/
#include <iostream>
#include <math.h>

using namespace std;

int main() {
  float a, b, c, s, area;
  string tipo;

  // Solicita los lados del triangulo
  cout << "Ingrese el lado a: ";
  cin >> a;

  cout << "Ingrese el lado b: ";
  cin >> b;

  cout << "Ingrese el lado c: ";
  cin >> c;

  // Calcula el semiperimetro
  s = (a + b + c) / 2;

  // Calcula el area
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  // Identifica el tipo de triangulo
  if (a == b && b == c) {
    tipo = "Equilatero";
  } else if (a == b || b == c || a == c) {
    tipo = "Isosceles";
  } else {
    tipo = "Escaleno";
  }

  // Imprime el area y el tipo de triangulo
  cout << "El area del triangulo es: " << area << endl;
  cout << "El triangulo es de tipo: " << tipo << endl;

  return 0;
}