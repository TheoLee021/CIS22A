/*
    p3.cpp
    Theo Lee
    10/01/22
    Description: Examples of:
        - VARIABLES: Initialization and Declaration
        - INPUT:    cin >>
        - OUTPUT:   cout <<
*/

#include <iostream>
using namespace std;

int main()
{
    double  weight;
    float   height;
    int     Age;
    
    weight = 142.19;
    height = 5.6;
    
    cout << "Please enter a whole number age: ";
    cin >> Age;
    cout << "Weight = " << weight << "\n" << "Height = " << height << "\n";
    cout << "The entered age was: " << Age << "\n";
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << "The Weight with 1 decimal is " << weight << endl;

    return 0;
}

/* === OUTPUT ===
Please enter a whole number age: 33
Weight = 142.19
Height = 5.6
The entered age was: 33
The Weight with 1 decimal is 142.2
*/
