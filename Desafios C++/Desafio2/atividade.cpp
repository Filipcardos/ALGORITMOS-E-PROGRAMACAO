// Celsius para Fahrenheit
#include <iostream>

int main() {
    double celsius;
    if (!(std::cin >> celsius)) return 1;
    std::cout << celsius * 9 / 5 + 32 << '\n';
}
