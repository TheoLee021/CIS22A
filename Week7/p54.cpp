// Theo Lee
// p54.cpp
// 11/13/2022
// Desctiption: This function that given an array of integers, 
// return the number of times the number 2 appears in the array.
// This function works for arrays of any size.

#include <iostream>
using namespace std;

void showArray(int array[], int size);
int count2s(int array[], int size);

int main()
{
    int array1[] = {0, 3, 3, 4, 5};
    int array2[] = {0, 2, 2, 4};
    int array3[] = {2, 3, 4};
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

    cout << "count2s(array1, " << size1 << ") = " << count2s(array1, size1) << endl;
    cout << "count2s(array2, " << size2 << ") = " << count2s(array2, size2) << endl;
    cout << "count2s(array3, " << size3 << ") = " << count2s(array3, size3) << endl;

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

int count2s(int array[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == 2)
            count ++;
    }
    return count;
}

/* == Sample Run:
int array1 [ ] = {0, 3, 3, 4, 5};
int array2 [ ] = {0, 2, 2, 4};
int array3 [ ] = {2, 3, 4};
---
count2s(array1, 5) = 0
count2s(array2, 4) = 2
count2s(array3, 3) = 1
===
*/
