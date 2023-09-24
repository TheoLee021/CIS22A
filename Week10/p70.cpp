// p70.cpp
// Theo Lee
// 12/03/2022
// Description: a program that will search a file
// filled with numbers, and show the largest number
// and the smallest number.

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inStream;

    int val, largest, smallest, count = 0;

    inStream.open("data70.txt");
    if(inStream.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }

    cout << "Largest number and Smallest number of data70" << endl;

    while(!inStream.eof())
    {
        inStream >> val;
        
        if(count == 0)
        {
            largest = val;
            smallest = val;
        }

        else if(largest < val)
            largest = val;
        
        else if(smallest > val)
            smallest = val;
        
        count ++;
    }
    cout << "Largest number is " << largest << endl;
    cout << "Smallest number is " << smallest << endl;

    inStream.close();

    return 0;
}

/* == Sample Run:
Largest number and Smallest number of data70
Largest number is 1104
Smallest number is 2
===
*/