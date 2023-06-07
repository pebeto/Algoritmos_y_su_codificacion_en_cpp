/*
 * 1.10. Area de un triangulo inscrito en uan circunferencia
 * Se tiene una circunferencia de radio r, inscrita en un triangulo de lados a,
 * b, c. Encuentre el area de este triangulo en funcion de a,b,c y r.
 */
#include <iostream>

int main(void) {
  float a, b, c, r, area;
  std::cout << "Ingrese lados y radio: ";
  std::cin >> a >> b >> c >> r;
  area = (a + b + c) * r / 2;
  std::cout << "El area del triangulo es:" << area << std::endl;
  return 0;
}
