//  Your name: Theo Lee
//  Program Name: p12.cpp
//  Date:  10/07/2022
//  Description: Coin calculator

#include <iostream>
using namespace std;

int main()
{
    int q, d, n, p, t;
    cout << "Please enter quarters: ";
    cin >> q;
    cout << "Please enter dimes: ";
    cin >> d;
    cout << "Please enter nickels: ";
    cin >> n;
    cout << "Please enter pennies: ";
    cin >> p;
    t = q*25 + d*10 + n*5 + p;
    
    if ((q < 0) || (d < 0) || (n < 0) or p < 0)
        cout << "Input values must be positive!";
    else
    {
        cout << "You have: ";
        cout << q << " * (25) + ";
        cout << d << " * (10) + ";
        cout << n << " * (5) + ";
        cout << p << " = ";
        cout << t << " cents";
    }
    
    return 0;
}

/* === OUTPUT ===

===== Test Run 1
Please enter quarters: 2
Please enter dimes: 3
Please enter nickels: 1
Please enter pennies: 0
You have: 2 * (25) + 3 * (10) + 1 * (5) + 0 = 85 cents

===== Test Run 2
Please enter quarters: -2
Please enter dimes: 3
Please enter nickels: 1
Please enter pennies: 0
Input values must be positive!

*/