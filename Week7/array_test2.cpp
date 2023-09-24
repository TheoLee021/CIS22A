#include <iostream>
using namespace std;

int main()
{
    int array[] = {1, 3, 5, 7, 9};
    int size = 0;

    size = sizeof(array) / sizeof(array[0]);

    cout << "array[] = {";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
            cout << array[i];
        else
            cout << array[i] << ", ";
    }
    cout << "}";

    return 0;
}
