// Practice

#include <iostream>
using namespace std;

int main()
{
    int a[5];
    int b[1][5];

    cout << "a[i] = ";
    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << ", ";
    }
    cout <<"\n";

    cout << "b[0][i] = ";
    for(int i = 0; i < 5; i++)
    {
        cout << b[0][i] << ", ";
    }
    cout <<"\n";

    cout << "b[1][i] = ";
    for(int i = 0; i < 5; i++)
    {
        cout << b[1][i] << ", ";
    }
    cout <<"\n";

    return 0;
}