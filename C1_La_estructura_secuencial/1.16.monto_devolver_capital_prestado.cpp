/*
 * 1.16. Monto a devolver por un capital prestado
 * Cual es el monto a devolver si nos prestan un capital c, a una tasa de
 * interes t%, durante n periodos?
 */
#include <cmath>
#include <iostream>

int main(void) {
  float c, i, n;
  double m;
  std::cout << "Ingrese capital prestado:";
  std::cin >> c;
  std::cout << "Ingrese tasa de interes (en decimales):";
  std::cin >> i;
  std::cout << "Ingrese numero de periodos:";
  std::cin >> n;
  m = c * pow(1 + i, n);
  std::cout << "El monto a devolver sera:" << m << std::endl;
  return 0;
}
