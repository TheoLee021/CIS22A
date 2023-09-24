// Theo Lee
// p57.cpp
// 11/13/2022
// Desctiption: This function that given an array of integers, 
// return true if 6 appears as either the first or last element in 
// the array. The array will be of size 1 or more. The function work 
// with an array of any size.

#include <iostream>
using namespace std;

void showArray(int array[], int size);
bool firstLast6(int array[], int size);

int main()
{
    cout.setf(std::ios::boolalpha);
    int array1[] = {1, 2, 6};
    int array2[] = {6, 1, 2, 3};
    int array3[] = {13, 6, 1, 2, 3};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);
    int size3 = sizeof(array3)/sizeof(array3[0]);

    cout << "int array1 [ ] = ";
    showArray(array1, size1);

    cout << "int array2 [ ] = ";
    showArray(array2, size2);

    cout << "int array3 [ ] = ";
    showArray(array3, size3);

    cout << "---" << endl;

    cout << "firstLast6(array1, " << size1 << ") = " << firstLast6(array1, size1) << endl;
    cout << "firstLast6(array2, " << size2 << ") = " << firstLast6(array2, size2) << endl;
    cout << "firstLast6(array3, " << size3 << ") = " << firstLast6(array3, size3) << endl;

    return 0;
}

void showArray(int array[], int size)
{
    cout << "{";
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
            cout << array[i];
        else
            cout << array[i] << ", ";
    }
    cout << "};" << endl;
}

bool firstLast6(int array[], int size)
{
    if(array[0] == 6 || array[size-1] == 6)
        return true;
    else
        return false;
}
/* == Sample Run:
int array1 [ ] = {1, 2, 6};
int array2 [ ] = {6, 1, 2, 3};
int array3 [ ] = {13, 6, 1, 2, 3};
---
firstLast6(array1, 3) = true
firstLast6(array2, 4) = true
firstLast6(array3, 5) = false
===
*/