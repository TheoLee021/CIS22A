//  Your name: Theo Lee
//  Program Name: p26.cpp
//  Date:  10/15/2022
//  Description: A program that Input a set of numbers 
//  terminated by the value -999. 
//  Find the sum, average, the largest, and the smallest value. 

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int many = 0, number, smallest, largest, sum = 0, avg;
    
    while (true)
    {
        cout << "Please enter a number(-999 to stop): ";
        cin >> number;

        if (number == -999)
            break;

        if (many == 0)
        {
            smallest = number;
            largest = number;
        }
        else if (number < smallest)
            smallest = number;
        else if (number > largest)
            largest = number;
        
        many ++;

        sum = sum + number;
        avg = sum/many;
    }

    cout << "The smallest = " << smallest << ", largest = ";
    cout << largest << ", sum = " << sum << ", avg = ";
    cout << avg;

    return 0;
}

/* === PROGRAM RUN1:
Please enter a number(-999 to stop): 1
Please enter a number(-999 to stop): 2
Please enter a number(-999 to stop): 3
Please enter a number(-999 to stop): -999
The smallest = 1, largest = 3, sum = 6, avg = 2

=== PROGRAM RUN2:
Please enter a number(-999 to stop): 3
Please enter a number(-999 to stop): 2
Please enter a number(-999 to stop): 1
Please enter a number(-999 to stop): -999
The smallest = 1, largest = 3, sum = 6, avg = 2

=== PROGRAM RUN3:
Please enter a number(-999 to stop): 3
Please enter a number(-999 to stop): 1
Please enter a number(-999 to stop): 2
Please enter a number(-999 to stop): -999
The smallest = 1, largest = 3, sum = 6, avg = 2

*/