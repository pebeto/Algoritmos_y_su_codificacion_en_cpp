/*
 * 1.19. Conversion del sexagesimal U°V'W'' a grados, minutos y segundos
 * centesimales Convierta el angulo sexagesimal U°V'W'' a grados, minutos y
 * segundos centesimales.
 */
#include <cmath>
#include <iostream>

int main(void) {
  float U, V, W, S, C, gra, min, seg;
  std::cout << "Grados, minutos y segundos sexagesimales:";
  std::cin >> U >> V >> W;
  S = U + V / 60 + W / 3600;
  C = 10 * S / 9;
  gra = floor(C);
  min = floor((C - gra) * 100);
  seg = ((C - gra) * 100 - min) * 100;
  std::cout << "El angulo en centesimales equivale a: ";
  std::cout << gra << "g " << min << "m " << seg << "s" << std::endl;
  return 0;
}
