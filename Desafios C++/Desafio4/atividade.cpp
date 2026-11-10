// Salário bruto por horas trabalhadas
#include <iostream>

int main() {
    double horas, valor_hora;
    if (!(std::cin >> horas >> valor_hora) || horas < 0 || valor_hora < 0) return 1;
    std::cout << horas * valor_hora << '\n';
}
