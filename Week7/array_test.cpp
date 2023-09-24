// Theo Lee
// p54.cpp
// 11/12/2022
// Desctiption: 

#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    int array[size];

    cout << "size?";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]? ";
        cin >> array[i];
    }

    cout << "array[" << size << "] = ";
    for (int z = 0; z < size; z++)
    {
        if (z == size)
            cout << array[z];
        else
            cout << array[z] << ", ";
    }

    return 0;
}

/* == Sample Run:

===
*/
