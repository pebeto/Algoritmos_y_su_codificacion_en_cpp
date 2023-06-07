/*
 * 1.7. Area de un rombo de diagonales conocidas
 * Calcule el area de un rombo de diagonales conocidas.
 */
#include <iostream>

int main(void) {
  float d1, d2, areaRombo;
  std::cout << "Ingrese diagonales: ";
  std::cin >> d1 >> d2;
  areaRombo = d1 * d2 / 2;
  std::cout << "Area del rombo:" << areaRombo << std::endl;
  return 0;
}
