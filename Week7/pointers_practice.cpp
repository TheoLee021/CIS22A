#include <iostream>
using namespace std;

int main()
{
    int x = 10, z = 100;
    int *X;
    X = &x;

    cout << x << endl;

    *X = 50;

    cout << x << endl;

    cout << "----" << endl;
    cout << &x << endl;
    cout << &z << endl;
    cout << &X << endl;
    cout << &*X << endl;

    X = &z;

    cout << "----" << endl;
    cout << x << endl;
    cout << *X << endl;

    *X = 1;

    cout << "----" << endl;
    cout << x << endl;
    cout << *X << endl;
    cout << z << endl;

    cout << "----" << endl;
    cout << &x << endl;
    cout << &z << endl;
    cout << &X << endl;
    cout << &*X << endl;

    return 0;
}