// Theo Lee
// p58.cpp
// 11/13/2022
// Desctiption: Bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int array[], int size);
void showArray(int array[], int size);

int main()
{
    int array1[] = {10, 2, 3, 1};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    showArray(array1, size1);
    bubbleSort(array1, size1);
    showArray(array1, size1);

    return 0;
}

void showArray(int array[], int size)
{
    cout << "before sort: array1 = {";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            cout << array[i];
        else
            cout << array[i] << ", ";
    }
    cout << "}" << endl;
}

void bubbleSort(int array[], int size)
{
    int temp;
    for(int i = size-1; i > 0; i --)
    {
        for(int j = 0; j < i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

/* == Sample Run:
efore sort: array1 = {10, 2, 3, 1}
before sort: array1 = {1, 2, 3, 10}
===
*/