/*
 * 1.18. Conversion de grados sexagesimales a centesimales y radianes
 * Existen muchas maneras de medir angulos. El sistema sexagesimal divide una
 * circunferencia en 360 partes y llama a cada una grado sexagesimal. Cada grado
 * sexagesimal esta dividido en 60 minutos y cada minuto, en 60 segundos (por
 * ejemplo, 20°15'21'''). El sistema centesimal considera como unidad de medida
 * al grado centesimal, que equivale a la 400ava parte de la circunferencia.
 * Cada grado centesimal esta dividido en 100 minutos centesimales y cada
 * minuto, en 100 segundos centesimales (por ejemplo, 20g15m21s).
 *
 * El sistema radial utiliza como unidad de medida un arco cuy alongitud es
 * igual a su radio. Como la longitud de la circunferencia es l=2*pi*r y como en
 * trigonometria se considera un circulo base con radio r=1, entonces toda la
 * circunferencia tendra 2*pi radianes.
 *
 * Deduzca la relacion entre los diferentes sistemas de medidas de angulos. Use
 * la proporcion entre la cantidad de grados requeridos y el total de grados de
 * toda la circunferencia. Teniendo en cuenta esta relacion, escriba un programa
 * que lea un angulo en grados sexagesimales y diga cual es su medida en los
 * sistemas centesimal y radial.
 */
#include <iostream>

int main(void) {
  float S, C;
  double R;
  std::cout << "Ingrese angulo en grados sexagesimales:";
  std::cin >> S;
  C = 10 / 9 * S;
  R = 3.14159 / 180 * S;
  std::cout << "Valor en grados centesimales: " << C << std::endl;
  std::cout << "Valor en radianes: " << C << std::endl;
  return 0;
}
