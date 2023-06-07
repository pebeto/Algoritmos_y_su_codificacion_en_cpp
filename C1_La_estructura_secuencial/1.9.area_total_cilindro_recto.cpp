/*
 * 1.9. Area total de un cilindro recto
 * Calcule el area total de un cilindro recto de radio y altura conocidos.
 */
#include <iostream>

int main(void) {
  float r, h;
  double areaTotal;
  std::cout << "Ingrese radio del cilindro:";
  std::cin >> r;
  std::cout << "Ingrese altura del cilindro:";
  std::cin >> h;
  areaTotal = 2 * 3.14159 * r * (r + h);
  std::cout << "El area total es:" << areaTotal << std::endl;
  return 0;
}
