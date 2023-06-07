/*
 * 1.1. Intercambiar valores
 * Muestre un algoritmo que lea dos valores, a y b, y los intercambie. Por
 * ejemplo, si a=2 y b=5, el algoritmo debe hacer que a=5 y b=2.
 */
#include <iostream>

int main(void) {
  int a, b, t;
  std::cout << "Ingrese a: ";
  std::cin >> a;
  std::cout << "Ingrese b: ";
  std::cin >> b;
  t = a;
  a = b;
  b = t;
  std::cout << "Los valores intercambiados son:" << std::endl;
  std::cout << "a =" << a << std::endl;
  std::cout << "b =" << b << std::endl;
  return 0;
}
