/*
 * 1.17. Ley de senos
 * En todo traingulo se cumple que cada lado es proporcional al seno del angulo
 * opuesto. esta ley se llama ley de los senos. Matematicamente:
 *
 * a/sin(alfa) = b/sin(beta) = c/sin(gamma)
 *
 * Si se conocen los angulos alfa, beta y el lado c, cuanto valen los otros dos
 * lados?
 */
#include <cmath>
#include <iostream>

int main(void) {
  float c, alfa, beta, gamma;
  double a, b;
  std::cout << "Ingrese lado conocido c:";
  std::cin >> c;
  std::cout << "Ingrese alfa, beta y gamma... En readianes, por favor...:";
  std::cin >> alfa >> beta >> gamma;
  a = c * sin(alfa) / sin(gamma);
  b = c * sin(beta) / sin(gamma);
  std::cout << "Lado a: " << a << std::endl;
  std::cout << "Lado b: " << b << std::endl;
  return 0;
}
