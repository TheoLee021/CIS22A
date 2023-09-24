#include <iostream>
#include <cstring>
using namespace std;

void printArray(char a[],int size1);

int main()
{
    char a[] = "Hello world";
    int b[] = {1, 2, 3, 4, 5};
    
    int size1;
    int size2;
    size1 = sizeof(a)/sizeof(a[0]);
    cout << "sizeof(a) = " << sizeof(a) << endl;
    cout << "sizeof(a[0]) = " << sizeof(a[0]) << endl;
    cout << "size1 = " << size1 << endl;

    cout << "---" << endl;

    size2 = sizeof(b)/sizeof(b[0]);
    cout << "sizeof(b) = " << sizeof(b) << endl;
    cout << "sizeof(b[0]) = " << sizeof(b[0]) << endl;
    cout << "size2 = " << size2 << endl;

    printArray(a, size1);

    int x = strlen(a);
    cout << "x = " << x << endl;

    cout << a << endl;
    cout << b << endl;

    char c[5];
    cout << "Enter input: ";
    cin.getline(c, 5); // cin >> c;에서는 c[5]를 초과해도 인풋이 되지만 getline을 쓰면 (c, 5)까지 제한이됨
    cout << c << endl;
    printArray(c, 5);

    char d[100], e[100], f[100];
    cin >> d;
    cin >> e;
    cin >> f;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    
    return 0;
}

void printArray(char a[], int size1)
{
    for (int i = 0; i < size1; i++)
        cout << "a[" << i << "] = " << a[i] << endl;
}