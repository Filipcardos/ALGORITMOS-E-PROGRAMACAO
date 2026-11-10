// Maioridade a partir de 18 anos
#include <iostream>

int main() {
    int idade;
    if (!(std::cin >> idade) || idade < 0) return 1;
    std::cout << (idade >= 18 ? "Maior de idade" : "Menor de idade") << '\n';
}
