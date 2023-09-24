// p67.cpp
// Theo Lee
// 12/03/2022
// Description: Example Program for C++ File Input(read) and Output(write)

#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main()
{
    // inStream is variable that we'll use to read from a file 
    ifstream inStream;

    // outStream is a variable that we'll use to write to a file
    ofstream outStream;

    int val; // variable to store each value read from the file

    // open the "telemetry.txt" file, and associate inStream with it
    inStream.open("telemetry.txt");

    //if "telemetry.txt" doesn't exist (we failed to open it)
    if(inStream.fail())
    {
        cout << "Input file opening failed.\n";
        exit(1); // exit the whole program
    }

    outStream.open("results.txt");
    {
        if(outStream.fail())
        {
            cout << "Output file opening failed. \n";
            exit(1);
        }
    }

    outStream << "Square of telemetry data" << endl;
    while(!inStream.eof())
    {
        // read data from "telemetry.txt" into variable val
        inStream >> val;

        // write the sum of val+val to "results.txt"
        outStream << val + val << endl;
    }
    inStream.close();
    outStream.close();
}