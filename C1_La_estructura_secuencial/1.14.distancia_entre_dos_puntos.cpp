/*
 * 1.14. Distancia entre dos puntos
 * Calcule la distancia entre dos puntos de coordenadas conocidas.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float x1, x2, y1, y2;
  double d;
  std::cout << "Ingrese coordenadas (x1, y1) del primer punto:";
  std::cin >> x1 >> y1;
  std::cout << "Ingrese coordenadas (x2, y2) del segundo punto:";
  std::cin >> x2 >> y2;
  d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  std::cout << "La distancia entre los puntos es:" << d << std::endl;
  return 0;
}
