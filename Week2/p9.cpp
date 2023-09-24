//  Your name: Theo Lee
//  Program Name: p9.cpp
//  Date:  10/07/2022
//  Description: Letter grade 
// A is b/w 90-100
// B is b/w 80-90
// C is b/w 70-80
// D is b/w 60-70
// F is under 60

#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Please enter a grade in percent: ";
    cin >> grade;
    
    if (grade < 0)
        cout << "Please enter a valid number";
    else if (grade >= 90)
        cout << "You have a 'A'";
    else if ((grade >= 80) && (grade < 90))
        cout << "You have a 'B'";
    else if ((grade >= 70) && (grade < 80))
        cout << "You have a 'C'";
    else if ((grade >= 60) && (grade < 70))
        cout << "You have a 'D'";
    else if (grade < 60)
        cout << "You have a 'F'";
    
    return 0;
}

/* === OUTPUT ===

Please enter a grade in percent: 75
You have a 'C'
===
Please enter a grade in percent: 85
You have a 'B'
===
Please enter a grade in percent: 95
You have a 'A'
===
Please enter a grade in percent: 65
You have a 'D'
===
Please enter a grade in percent: 55
You have a 'F'
===

*/