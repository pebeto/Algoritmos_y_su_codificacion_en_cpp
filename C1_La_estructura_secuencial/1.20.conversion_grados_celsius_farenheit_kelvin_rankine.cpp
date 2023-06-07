/*
 * 1.20 Conversion de grados Celsius, Farenheit, Kelvin y Rankine
 * Para medir la tempreature existen cuatro escalas que guardan la siguiente
 * proporcion:
 *
 * |----------------|------------------|---------------|----------------|
 * | Grados Celsius | Grados Farenheit | Grados Kelvin | Grados Rankine |
 * |----------------|------------------|---------------|----------------|
 * |  100°          | 212°             | 373°          | 671.4°         | Punto de ebullicion del agua
 * |----------------|------------------|---------------|----------------|
 * |  C             |  F               |  K            |  R             | Temperatura cualquiera
 * |  0°            | 32°              | 273°          | 492°           | Punto de congelacion del agua
 * |----------------|------------------|---------------|----------------|
 * |  -273.15°      | -460°            | 0°            | 0°             | Cero absoluto donde cesa todo movimiento molecular
 * |----------------|------------------|---------------|----------------|
 *
 * Si C, F, K y R son los valores de una misma temperatura en grados Celsius
 * (centigrados), Farenheit, Kelvin y Rankine, respectivamente, deduzca las
 * formulas para convertir una temperatura de una escala a otra. Luego, lea una
 * temperatura en grados Celsius y diga a cuantos grados equivale en Farenheit,
 * Kelvin y Rankine.
 */
#include <iostream>

int main(void) {
  float C, F, K, R;
  std::cout << "Ingrese temperatura en grados Celsius:";
  std::cin >> C;
  F = 9 * C / 5 + 32;
  K = C + 273;
  R = 9 * C / 5 + 492;
  std::cout << "Grados Farenheit: " << F << std::endl;
  std::cout << "Grados Kelvin: " << K << std::endl;
  std::cout << "Grados Rankine: " << R << std::endl;
  return 0;
}
