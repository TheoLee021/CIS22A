//  Theo Lee
//  p35.cpp
//  10/22/2022
//  Sample Program, Function: weightOfpeople

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype
void weightOfpeople(int numberPeople, double weightPerPerson);

// WRITE THE MAIN TO PRODUCE THE OUTPUT
int main()
{
    weightOfpeople(5, 180.55);

    return 0;
}


// Function Definition
void weightOfpeople(int numberPeople, double weightPerPerson)
{
    cout << "The total weight of " << numberPeople << " people,\n";
    cout << "each person weighing" << weightPerPerson << "lb\nis ";
    cout << fixed << setprecision(1) << numberPeople * weightPerPerson << " lb\n";
}

/* == OUTPUT:
The total weight of 5 people,
each person weighing 180.55 lb
is 902.8 lb
*/