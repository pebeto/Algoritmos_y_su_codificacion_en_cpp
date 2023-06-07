/*
 * 1.8. Volumen de un cilindro recto
 * Calcule el volumen de un cilindro recto conociendo su radio y su altura.
 */
#include <iostream>

int main(void) {
  float r, h;
  double volCilindro;
  std::cout << "Ingrese radio del cilindro:";
  std::cin >> r;
  std::cout << "Ingrese altura del cilindro:";
  std::cin >> h;
  volCilindro = 3.14159 * r * r * h;
  std::cout << "El volumen es:" << volCilindro << std::endl;
  return 0;
}
