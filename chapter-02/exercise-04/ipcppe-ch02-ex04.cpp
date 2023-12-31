#include <cmath>
#include <iostream>

// Introduce names of the I/O objects from the std namespace
using std::cout, std::cin, std::endl;

// This program computes the compound interest rate
//
int main()
{
    cout << "Enter the initial amount to invest: " << endl;
    double initialAmount{};
    if (!(cin >> initialAmount))
    {
        cout << "Error in entering of initial amount to invest, exiting..." << endl;
        return -1;
    }
    if (initialAmount <= 0.0)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    cout << "Enter the annual rate [% per 12 months]: " << endl;
    double r{};
    if (!(cin >> r))
    {
        cout << "Error in entering of annual rate, exiting..." << endl;
        return -1;
    }
    if (r <= 0.0 || r >= 100.0)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    cout << "Compound frequency is a period in months between computing interest" << endl;
    cout << "(e.g. if 2 times a year, enter 6)" << endl;
    cout << "If you don't know, enter 12 for a yearly compound frequency." << endl;
    cout << "Enter the compound frequency [months 1-72]: " << endl;
    double t{};
    if (!(cin >> t))
    {
        cout << "Error in entering of compound frequency, exiting..." << endl;
        return -1;
    }
    if (t <= 0.0 || t > 72.0)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    cout << "Enter the investment time [months 1-100]: " << endl;
    double m{};
    if (!(cin >> m))
    {
        cout << "Error in entering investment time, exiting..." << endl;
        return -1;
    }
    if (m <= 0.0 || m > 100)
    {
        cout << "Wrong value, exiting..." << endl;
        return -1;
    }

    const double kMontsPerYear = 12.0;
    const double kPercentageDiv = 100.0;

    double i = m / t; // compounding periods

    double C_i = initialAmount * std::pow((1.0 + (r / kPercentageDiv) / kMontsPerYear * t), i);

    cout << "Your balance before tax, after " << m;
    cout << " months of investment is: " << C_i << endl;

    // Compute the net income
    double income = C_i - initialAmount;
    cout << "Your income is " << income << endl;
    const double kIncomeTax = 19.0; // 19%
    cout << "After " << kIncomeTax << "% tax deduction you get: ";
    cout << (1.0 - kIncomeTax / kPercentageDiv) * income << endl;

    return 0;
}
