/*
 * 1.21. Conversion de °F, °K y °R a celsius
 * Realice programa que permita leer tres temperaturas (una en °F, otra en °K y
 * otra en °R) y las convierta a sus equivalentes en °C.
 */
#include <iostream>

int main(void) {
  float F, K, R, CF, CK, CR;
  std::cout << "Ingrese tres temperaturas en Farenheit, Kelvin y Rankine:";
  std::cin >> F >> K >> R;
  CF = 5 * (F - 32) / 9;
  CK = K - 273;
  CR = 5 * (R - 492) / 9;
  std::cout << F << " Grados Farenheit, son: " << CF << "grados celsius"
            << std::endl;
  std::cout << K << " Grados Kelvin, son: " << CK << "grados celsius"
            << std::endl;
  std::cout << R << " Grados Rankine, son: " << CR << "grados celsius"
            << std::endl;
  return 0;
}
