//  Theo Lee
//  p36.cpp
//  10/22/2022
//  Random number generator
//  The function show a random number between -10 to 10
//  The function also informs the user wherther the number is positive or negative

#include <iostream> // need this for cout, cin
#include <time.h>   // need this for time(NULL)
#include <stdlib.h> // need this for srand(iseed)

using namespace std;

void randomNum();

int main()
{
    int iseed = time(NULL); 
    srand(iseed);

    cout << "Function call 1: " << endl;
    randomNum();
    cout << endl;
    cout << "Function call 2: " << endl;
    randomNum();
    
    return 0;
}

void randomNum()
{
    int min = -10;
    int max = 10;
    int randomNum = min + rand()%(max-min+1);
    cout << "Generating a random number between -10 to 10: " << randomNum << endl;
    
    if (randomNum > 0)
        cout << "The random number " << randomNum << " is Positive." << endl;
    else if (randomNum < 0)
        cout << "The random number " << randomNum << " is Negative." << endl;
}

/* == Sample Run:
Function call 1: 
Generating a random number between -10 to 10: 3
The random number 3 is Positive.

Function call 2: 
Generating a random number between -10 to 10: -4
The random number -4 is Negative.
===
*/