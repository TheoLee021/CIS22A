// p68.cpp
// Theo Lee
// 12/03/2022
// Description: a program which outputs 100 random numbers 
// between 1-100 in a file named "numbers.txt" writing 
// 10 numbers per line.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;

int randomNum();

int main()
{
    int iseed = time(NULL);
    srand(iseed);

    ofstream outStream;

    int val;

    outStream.open("numbers.txt");
    {
        if(outStream.fail())
        {
            cout << "Output file opening failed. \n";
            exit(1);
        }
    }

    int count = 0;
    for(int i = 0; i < 100; i++)
    {
        if(count == 10)
        {
            outStream << "\n";
            count = 0;
        }
        outStream << randomNum() << " ";
        count ++;
    }

    return 0;
}

int randomNum()
{
    int min = 1;
    int max = 100;
    int randomNum = min + rand()%(max-min+1);

    return randomNum;
}
