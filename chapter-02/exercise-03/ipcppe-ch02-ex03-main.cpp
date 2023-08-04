#include <iostream>

double f(double x);

int main () {
    double interval_start{1}; 
    double interval_end{2};
    double interval_mid{};
    double interval_tolerance{0.000001};

    bool found_a_root{false};
    while (found_a_root == false) {
        interval_mid = (interval_end + interval_start) / 2.0;
        
        if ((f(interval_mid) < 0) == (f(interval_end) < 0)) {
            interval_end = interval_mid;
        }
        else {
            interval_start = interval_mid;
        }

        if (f(interval_mid) < interval_tolerance &&
        -f(interval_mid) < interval_tolerance) {
            found_a_root = true;
        }
    }

    std::cout << "One root is "  << interval_mid << std::endl;
}

double f(double x) {
    return x * x * x - x -2;
}
