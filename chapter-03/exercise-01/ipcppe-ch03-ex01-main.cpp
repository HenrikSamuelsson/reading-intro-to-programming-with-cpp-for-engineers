#include <iostream>

double fahrenheitToCelsius(double temperatureInFahrenheit);

int main()
{
    std::cout << "Temperature Converter - Fahrenheit to Celsius" << std::endl;
    
    std::cout << "Enter temperature in degrees Fahrenheit: ";
    double temperatureInFahrenheit{};
    std::cin >> temperatureInFahrenheit;

    double temperatureInCelsius{};
    temperatureInCelsius = fahrenheitToCelsius(temperatureInFahrenheit);

    std::cout << temperatureInFahrenheit << " degrees Fahrenheit equals "
              << temperatureInCelsius << " degrees Celsius." 
              << std::endl;

    return 0;
}

double fahrenheitToCelsius(double temperatureInFahrenheit)
{
    return (temperatureInFahrenheit - 32.0) * 5.0 / 9.0;
}
