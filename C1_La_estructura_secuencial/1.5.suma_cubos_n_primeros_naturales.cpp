/*
 * 1.5. Suma de los cubos de los N primeros numeros naturales
 * Calcule la suma de los cubos de los primeros naturales.
 */
#include <iostream>

int main(void) {
  int n, s;
  std::cout << "Ingrese numero de terminos:";
  std::cin >> n;
  s = n * n * (n + 1) * (n + 1) / 4;
  std::cout << "Suma de los cubos de los n primeros terminos:" << s
            << std::endl;
  return 0;
}
