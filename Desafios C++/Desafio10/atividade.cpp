// Fatorial de 0 a 20
#include <iostream>

int main() {
    int n;
    if (!(std::cin >> n) || n < 0 || n > 20) return 1;
    unsigned long long produto = 1;
    for (int i = 2; i <= n; ++i) produto *= i;
    std::cout << produto << '\n';
}
