/*
 * 1.12. Hipotenusa de un triangulo rectangulo
 * En un triangulo rectangulo, calcule la longitud de la hipotenusa conociendo
 * las longitudes de sus catetos.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float a, b;
  double c;
  std::cout << "Ingrese catetos a y b:";
  std::cin >> a >> b;
  c = sqrt(a * a + b * b);
  std::cout << "La hipotenusa mide:" << c << std::endl;
  return 0;
}
