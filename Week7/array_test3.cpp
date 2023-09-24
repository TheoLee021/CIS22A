#include <iostream>
using namespace std;

void function1(int a[], int num);

int main()
{
    char H,e,l,o;
    int arr[] = {1,2,3,4,5};
    char charArr[] = {H,e,l,l,o};
    cout << arr << endl;
    cout << charArr << endl;

    return 0;
}

void function1(int a[], int num)
{
    cout << a[num] << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a[i];
    }
}