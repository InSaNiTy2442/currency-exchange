#include <iostream>

int main() {

    double pesos, reais, soles;
    double dollars;
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> pesos;
    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;
    // Pesos conversion rate: 0.058
    // Reais conversion rate: 0.20
    // Soles conversion rate: 0.27
    dollars = 0.058 * pesos + 0.20 * reais + 0.27 * soles;
    std::cout << "Total USD = $" << dollars << "\n";
}
