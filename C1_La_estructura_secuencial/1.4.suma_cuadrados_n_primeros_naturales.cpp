/*
 * 1.4. Suma de los cuadrados de los N primeros numeros naturales
 * Calcule la suma de los cuadrados de los primeros naturales.
 */
#include <iostream>

int main(void) {
  int n, s;
  std::cout << "Ingrese numero de terminos:";
  std::cin >> n;
  s = n * (n + 1) * (2 * n + 1) / 6;
  std::cout << "Suma de los cuadrados de los n primeros terminos:" << s
            << std::endl;
  return 0;
}
