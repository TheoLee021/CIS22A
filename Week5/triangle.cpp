//  Theo Lee
//  triangle.cpp
//  10/30/2022
//  Triangle indicator: A program that output indicates whether or not 
//  the triangle is an Equilateral Triangle, a Right Triangle, an Isosceles 
//  which is Not Equilateral, or some Other type of triangle.

#include <iostream>

using namespace std;

void triangle(float a, float b, float c);

int main()
{
    int repeat;
    float a, b, c;

    triangle(a, b, c);

    while (true)
    {
        cout << "\n";
        cout << "Would you like to repeat (1-Yes, 2-No): ";
        cin >> repeat;

        if (repeat < 1 || repeat > 2)
            cout << "Please enter valiable number" << endl;

        else if (repeat == 1)
            triangle(a, b, c);

        else if (repeat == 2)
            break;
    }

    return 0;
}

void triangle(float a, float b, float c)
{
    cout << "\n";
    cout << "Please enter side A: ";
    cin >> a;
    while (a < 0)
    {
        cout << "Value entered must be positive!" << endl;
        cout << "Please enter side A: ";
        cin >> a;
    }
    
    cout << "Please enter side B: ";
    cin >> b;
    while (b < 0)
    {
        cout << "Value entered must be positive!" << endl;
        cout << "Please enter side B: ";
        cin >> b;
    }

    cout << "Please enter side C: ";
    cin >> c;
    while (c < 0)
    {
        cout << "Value entered must be positive!" << endl;
        cout << "Please enter side C: ";
        cin >> c;
    }

    if (a == b && b == c)
        cout << "This is an EQUILATERAL triangle!" << endl;
    
    else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b)
        cout << "This is a RIGHT triangle!" << endl;
    
    else if (a == b && a != c && b != c)
        cout << "This is an ISOSCELES triangle!" << endl;

    else if (b == c && b != a && c != a)
        cout << "This is an ISOSCELES triangle!" << endl;
    
    else if (c == a && c != b && a != b)
        cout << "This is an ISOSCELES triangle!" << endl;
    
    else
        cout << "This is ANOTHER kind of triangle, NOT ISOSCELES, NOT RIGHT, NOT EQUILATERAL" << endl;
}

/* == Sample Run:
Please enter side A: 1
Please enter side B: -10
Value entered must be positive!
Please enter side B: -100
Value entered must be positive!
Please enter side B: 1
Please enter side C: 1
This is an EQUILATERAL triangle!

Would you like to repeat (1-Yes, 2-No): 1
===

Please enter side A: 3
Please enter side B: 3
Please enter side C: 1
This is an ISOSCELES triangle!

Would you like to repeat (1-Yes, 2-No): 1
===

Please enter side A: 3
Please enter side B: 4
Please enter side C: 5
This is a RIGHT triangle!

Would you like to repeat (1-Yes, 2-No): 1
===

Please enter side A: 1
Please enter side B: 2
Please enter side C: 3
This is ANOTHER kind of triangle, NOT ISOSCELES, NOT RIGHT, NOT EQUILATERAL

Would you like to repeat (1-Yes, 2-No): 2
===
*/