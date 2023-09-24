//  Your name: Theo Lee
//  Program Name: p8.cpp
//  Date:  10/07/2022
//  Description: User height message:
// - tall (over 72")
// - short(under 60")
// - medium (b/w 72" to 60")

#include <iostream>
using namespace std;

int main()
{
    int feet, inches, total_inches;
    
    cout << "Please enter feet: ";
    cin >> feet;
    cout << "Please enter inches: ";
    cin >> inches;
    total_inches = feet*12 + inches;
    
    cout << "Your height is: " << feet << " feet + " << inches << " inches = " << total_inches << " inches" << endl;
    
    if (total_inches < 0)
        cout << "Please enter a valid number";
    else if (total_inches > 72)
        cout << "You are tall";
    else if ((total_inches > 60) && (total_inches < 72))
        cout << "You are midium";
    else
        cout << "You are short";
    
    return 0;
}

/* === OUTPUT ===

Please enter feet: 6
Please enter inches: 1
Your height is: 6 feet + 1 inches = 73 inches
You are tall
===
Please enter feet: 4
Please enter inches: 2
Your height is: 4 feet + 2 inches = 50 inches
You are short
===
 Please enter feet: 5
 Please enter inches: 4
 Your height is: 5 feet + 4 inches = 64 inches
 You are midium
===

*/
