#include <iostream>

int main()
{
    std::cout << "Square root approximation" << std::endl;

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    double lower_bound{1};
    double upper_bound{x / 2};
    double mid_val{};

    while (upper_bound >= lower_bound)
    {
        mid_val = (lower_bound + upper_bound) / 2;
        if (mid_val * mid_val > x)
        {
            upper_bound = mid_val - 1;
        }
        else
        {
            lower_bound = mid_val + 1;
        }
    }
    double result = (lower_bound + upper_bound) / 2;

    std::cout << "Square root of " << x << " is approximately " << result 
              << std::endl;

    return 0;
}
