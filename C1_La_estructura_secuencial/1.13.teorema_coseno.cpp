/*
 * 1.13. Teorema del coseno
 * El teorema del coseno es muy utilizado en geometria para calcular la longitud
 * del tercer lado de un triangulo, cuando se conocen los otros dos lados y el
 * triangulo que forman. Siendo a el lado desconocido, b y c los lados
 * conocidos, y alpha el angulo formado por b y c, el teorema del coseno se
 * enuncia como:
 *
 * alpha = sqrt(b^2 + c^2 - 2 * b * c * cos(alpha))
 *
 * Calcule el tercer lado de un triangulo aplicando este teorema.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float b, c, alpha;
  double a;
  std::cout << "Ingrese lados conocidos del triangulo:";
  std::cin >> b >> c;
  std::cout << "Ingrese el angulo que forman... En radianes, por favor:";
  std::cin >> alpha;
  a = sqrt(b * b + c * c - 2 * b * c * cos(alpha));
  std::cout << "El lado desconocido es:" << a << std::endl;
  return 0;
}
