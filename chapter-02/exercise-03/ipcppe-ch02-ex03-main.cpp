#include <iostream>

double f(double x);

int main () {
    double interval_start{1}; 
    double interval_end{2};
    double interval_mid{};
    double interval_tolerance{0.001};

    while (interval_end - interval_start > interval_tolerance) {
        interval_mid = (interval_end - interval_start) / 2;
        if ((f(interval_mid) < 0) == (f(interval_end) < 0)) {
            interval_end = interval_mid;
        }
        else {
            interval_start = interval_mid;
        }
    }

    std::cout << interval_mid << std::endl;
}

double f(double x) {
    return x * x * x - x -2;
}
