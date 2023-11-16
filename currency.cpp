#include <iostream>

int main() {
    double pesos, real, soles;
    double dollars;
    double dollars1;
    double dollars2;
    int x;
    // Pesos conversion rate: 0.00025
    // Real conversion rate: 0.21
    // Soles conversion rate: 0.27
    std::cout << "Please state which currency you would like to convert to USD.\n";
    std::cout << "   1. Colombian Pesos   2. Brazilian Real   3. Peruvian Soles: ";
    std::cin >> x;
    if (x == 1) {
        std::cout << "Enter number of Colombian Pesos: ";
        std::cin >> pesos;
        dollars = 0.00025 * pesos;
        std::cout << "Total USD = $" << dollars << "\n";
    } else if (x == 2) {
        std::cout << "Enter number of Brazilian Real: ";
        std::cin >> real;
        dollars1 = 0.21 * real;
        std::cout << "Total USD = $" << dollars1 << "\n";
    } else if (x == 3) {
        std::cout << "Enter number of Peruvian Soles: ";
        std::cin >> soles;
        dollars2 = 0.27 * soles;
        std::cout << "Total USD = $" << dollars2 << "\n";
    } else {
        std::cout << "Please pick a currency to convert and restart the program.: ";
    }
}