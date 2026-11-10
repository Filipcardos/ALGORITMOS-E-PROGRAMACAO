// Soma dos elementos de um vetor
#include <iostream>
#include <vector>
int main() {
    int quantidade;
    if (!(std::cin >> quantidade) || quantidade < 0) return 1;
    std::vector<int> valores;
    for (int i = 0; i < quantidade; ++i) {
        int valor;
        if (!(std::cin >> valor)) return 1;
        valores.push_back(valor);
    }
    long long soma = 0;
    for (int valor : valores) soma += valor;
    std::cout << soma << '\n';
}
