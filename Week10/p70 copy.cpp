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
    ofstream outStream;

    int val, largest, smallest, count = 0;

    inStream.open("data70.txt");
    if(inStream.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }

    outStream.open("results70.txt");
    if(outStream.fail())
    {
        cout << "Output file opening failed. \n";
        exit(1);
    }

    outStream << "Largest number and Smallest number of data70" << endl;

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
    outStream << "Largest number is " << largest << endl;
    outStream << "Smallest number is " << smallest << endl;

    inStream.close();
    outStream.close();

    return 0;
}
