// p69.cpp
// Theo Lee
// 12/03/2022
// Description: a program that takes its input from 
// a file of number of type double. The program shows 
// the sum and average of all the numbers found in 
// the file data69.txt Download data69.txt

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    ifstream inStream;
    
    double val, sum=0, avg, count = 0;

    inStream.open("data69.txt");
    if(inStream.fail())
    {
        cout << "Input file opening failed. \n";
        exit(1);
    }

    cout << "Sum and Average of data69" << endl;
    while(!inStream.eof())
    {
        inStream >> val;
        sum = sum + val;
        count ++;
    }
    avg = sum / count;
    cout << "sum = " << sum << endl;
    cout << "avg = " << avg << endl;

    inStream.close();

    return 0;
}

/* == Sample Run:
Sum and Average of data69
sum = 4481.22
avg = 280.076
===
*/