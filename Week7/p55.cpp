// Theo Lee
// p55.cpp
// 11/13/2022
// Desctiption: This function given an array of integers 
// returns the largest value in the array. The function work for 
// an array of ANY size, where the size is greater than 0.

#include <iostream>
using namespace std;

void showArray(int array[], int size);
int max(int array[], int size);

int main()
{
    int array1[] = {0, 8, 3, 4, 1};
    int array2[] = {0, 2, 7, 4};
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

    cout << "max(array1, " << size1 << ") = " << max(array1, size1) << endl;
    cout << "max(array2, " << size2 << ") = " << max(array2, size2) << endl;
    cout << "max(array3, " << size3 << ") = " << max(array3, size3) << endl;

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

int max(int array[], int size)
{
    int largest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] > largest)
            largest = array[i];
    }
    return largest;
}

/* == Sample Run:
int array1 [ ] = {0, 8, 3, 4, 1};
int array2 [ ] = {0, 2, 7, 4};
int array3 [ ] = {2, 3, 4};
---
max(array1, 5) = 8
max(array2, 4) = 7
max(array3, 3) = 4
===
*/
