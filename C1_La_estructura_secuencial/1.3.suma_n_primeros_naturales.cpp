/*
 * 1.3. Suma de los N primeros numeros naturales
 * Hallar la suma de los n primeros numeros naturales.
 */
#include <iostream>

int main(void) {
  int n, s;
  std::cout << "Ingrese numero de terminos:";
  std::cin >> n;
  s = n * (n + 1) / 2;
  std::cout << "Suma de los n primeros terminos:" << s << std::endl;
  return 0;
}
