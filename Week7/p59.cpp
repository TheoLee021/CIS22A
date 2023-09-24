// Theo Lee
// p59.cpp
// 11/13/2022
// Desctiption: This function that given an int array of any size, 
// return true if it does not contain a 2 or 3. 

#include <iostream>
using namespace std;

void showArray(int array[], int size);
bool no23(int array[], int size);

int main()
{
    cout.setf(std::ios::boolalpha);

    int array1[] = {4, 5};
    int array2[] = {4, 2, 1};
    int array3[] = {3, 5, 0, 1};
    int size1 = sizeof(array1)/sizeof(array1[0]);
    int size2 = sizeof(array2)/sizeof(array2[0]);
    int size3 = sizeof(array3)/sizeof(array3[0]);

    cout << "array1 [ ] = ";
    showArray(array1, size1);
    cout << "no23(array1) = " << no23(array1, size1) << endl;

    cout << "---" << endl;

    cout << "array2 [ ] = ";
    showArray(array2, size2);
    cout << "no23(array2) = " << no23(array2, size2) << endl;
    
    cout << "---" << endl;

    cout << "array3 [ ] = ";
    showArray(array3, size3);
    cout << "no23(array3) = " << no23(array3, size3) << endl;    

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

bool no23(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == 2 || array[i] == 3)
            return false;
    }
    return true;
}

/* == Sample Run:
array1 [ ] = {4, 5};
no23(array1) = true
---
array2 [ ] = {4, 2, 1};
no23(array2) = false
---
array3 [ ] = {3, 5, 0, 1};
no23(array3) = false
===
*/