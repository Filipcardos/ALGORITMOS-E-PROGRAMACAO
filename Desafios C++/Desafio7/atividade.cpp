// Maior de três números
#include <iostream>
#include <algorithm>
int main() {
    double a, b, c;
    if (!(std::cin >> a >> b >> c)) return 1;
    std::cout << std::max({a, b, c}) << '\n';
}
