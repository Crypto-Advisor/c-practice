#include <iostream>

int main() {
  double pesos, reais, soles, dollars;
  std::cout << "Enter number of Columbian Pesos:";
  std::cin >> pesos;

  std::cout << "Enter number of Reais:";
  std::cin >> reais;

  std::cout << "Enter number of Soles:";
  std::cin >> soles;
  
  // pesos: 0.054
  // reais: 0.19
  // soles: 0.26

  dollars = ( 0.054 * pesos ) + ( 0.19 * reais ) + ( 0.26 * soles );

  std::cout << "US Dollars = $" << dollars << "\n";
}
