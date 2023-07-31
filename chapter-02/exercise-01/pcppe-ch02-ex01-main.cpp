#include <iostream>

int main() {
    std::cout << "GCD Calculator" << std::endl;
    
    std::cout << "Enter an integer: ";
    int a {};
    std::cin >> a;

    int b {};
    std::cout << "Enter an integer: ";
    std::cin >> b;

    std::cout << "GCD(" << a << ", " << b << ") = ";

    int tmp {};
    while (0 != b) {
        tmp = b;
        b = a % b;
        a = tmp;
    }

    std::cout << a << std::endl;
    
    return 0;
}
