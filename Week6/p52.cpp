/*
Theo Lee
p52.cpp
11/05/2022
Desctiption: The program that asks the user how many numbers
to enter, puts the entered numbers into an array and displays
those numbers
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "How many numbers would you like to enter? ";
    cin >> x;

    int num[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> num[i];
    }
    cout << "The numbers you entered are: ";
    for (int i = 0; i < x; i++)
    {
        cout << num[i];
        if (i + 1 < x)
            cout << ",";
    }

    cout << endl;

    return 0;
}

/* == Sample Run:
How many numbers would you like to enter? 8
Enter number 1: 5
Enter number 2: 3
Enter number 3: 10
Enter number 4: 15
Enter number 5: 25
Enter number 6: 21
Enter number 7: 99
Enter number 8: 16
The numbers you entered are: 5,3,10,15,25,21,99,16
===
*/