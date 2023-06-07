/*
 * 1.11. Area de un triangulo en funcion del semiperimetro
 * El area de un triangulo en funcion del semiperimetro, dada por Heron, es:
 *
 * area = sqrt(p * (p - a) * (p - b) * (p - c))
 *
 * Donde a, b y c son los lados del triangulo y p = (a + b + c) / 2 es el
 * semiperimetro. Calcule el area del triangulo aplicando esta formula.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float a, b, c, p;
  double areaTriang;
  std::cout << "Ingrese lados del triangulo:";
  std::cin >> a >> b >> c;
  p = (a + b + c) / 2;
  areaTriang = sqrt(p * (p - a) * (p - b) * (p - c));
  std::cout << "El area del triangulo es:" << areaTriang << std::endl;
  return 0;
}
