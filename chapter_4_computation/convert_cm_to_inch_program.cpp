/*
program converts cm units to inch and vice versa
 */
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    constexpr double inch_to_cm = 2.54;
    cout << "enter the value followed by units( 'i' for inch and 'c' for cm)";
    double input_value = 0; //  to store the user input value
    char input_unit;        // to store the unit of input value
    cin >> input_value;
    cin >> input_unit;

    if (input_unit == 'i')
        cout << " the value of" << input_value << input_unit << "in cm is" << inch_to_cm * input_value << " cm";
    else if (input_unit == 'c')
        cout << " the value of" << input_value << input_unit << "in inch is" << input_value / inch_to_cm << " inch";
    else
        cout << "there are no units";
}
