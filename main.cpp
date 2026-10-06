#include <iostream>
int main() {
    int a = 0;
    int b = 0;
    std::cout << "Enter two numbers: \n";
    if (!(std::cin >> a >> b)) {
        std::cout << "Error\n";
        return 1;
    }
    int sum = a + b;
    std::cout << "Summa: " << sum << '\n';
    return 0;
}