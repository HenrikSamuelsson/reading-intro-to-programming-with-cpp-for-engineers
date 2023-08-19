#include <iostream>
#include <string>
#include <vector>

// Listing them here allows omitting std::
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    // Make a slot for each letter, from ’a’ to ’z’
    // Initial count set to 0 for each.
    vector<char> histogram('z' - 'a' + 1, 0);

    string in_str;

    cin >> in_str;
    in_str = "AGH University of Science and Technology";

    for (auto c : in_str)    // c takes on successive letters from in_str.
    {
        if (std::isalpha(c))    // Check if c is alphanumeric.
        {
            ++histogram[std::tolower(c) - 'a'];
        }
    }
    cout << endl;

    for (auto c{'a'}; c <= 'z'; ++c) // c takes on codes from ’a’ to ’z’
        cout << c << " ";            // Print all characters ’a’ to ’z’

    cout << endl;

    for (auto h : histogram) // h takes on successive values of the histogram
        cout << h << " ";    // Print histogram values
}
