// Área de um círculo
#include <iostream>
#include <cmath>
int main() {
    double raio;
    if (!(std::cin >> raio) || raio < 0) return 1;
    std::cout << std::acos(-1.0) * raio * raio << '\n';
}
