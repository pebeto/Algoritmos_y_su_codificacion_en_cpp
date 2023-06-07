/*
 * 1.2. Numero de apretones de mano
 * A una reunion asistieron n personas. Cuantos apretones de mano hubo?
 */
#include <iostream>

int main() {
  int n, a;
  std::cout << "Ingrese el numero de personas: ";
  std::cin >> n;
  a = n * (n - 1) / 2;
  std::cout << "Numero de apretones de mano: " << n * (n - 1) / 2 << std::endl;
  return 0;
}
