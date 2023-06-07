/*
 * 1.15. Convertir complejo C = A + B a coordenadas polares
 * Convierta el complejo c = a + b a sus coordenadas polares.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float a, b;
  double w, p;
  std::cout << "Ingrese parte real: ";
  std::cin >> a;
  std::cout << "Ingrese parte imaginaria: ";
  std::cin >> b;
  p = sqrt(a * a + b * b);
  w = atan(b / a);
  std::cout << "Angulo: " << w << std::endl;
  std::cout << "Distancia: " << p << std::endl;
  return 0;
}
