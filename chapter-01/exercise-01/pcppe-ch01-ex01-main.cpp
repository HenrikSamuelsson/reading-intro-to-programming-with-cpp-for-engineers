#include <iostream>

int main() {
    std::cout << "GCD Calculator" << std::endl;
    
    std::cout << "Enter an integer: ";
    int a {};
    std::cin >> a;

    int b {};
    std::cout << "Enter an integer: ";
    std::cin >> b;

    std::cout << "GCD(" << a << ", " << b << ") = " << std::endl;
    return 0;
}
