/*
 * 1.6. Suma de las areas de los cuadrados formados uniendo los puntos medios de
 * sus lados
 * En un cuadrado cuyo lado es a se unen los puntos medios de sus
 * cuatro lados. Se forma asi otro cuadrado cuyos puntos medios se unen tambien
 * formando otro cuadrado, y asi sucesivamente. Calcule la suma de las areas de
 * todos los cuadrados asi formados
 */
#include <iostream>

int main(void) {
  int a, s;
  std::cout << "Ingrese lado del cuadrado inicial:";
  std::cin >> a;
  s = 2 * a * a;
  std::cout << "La suma de las areas es:" << s << std::endl;
  return 0;
}
