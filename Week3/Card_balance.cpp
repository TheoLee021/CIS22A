#include <iostream>

using namespace std;

int main()
{
    int count = 1;

    for (float balance = 50; balance <= 100; balance = balance + (balance * 2/100))
    {
        cout << "After " << count << " month: " << balance;
        cout << " + 2% of " << balance << " = ";
        cout << balance + (balance * 2/100) << endl;
        count++;
    }

    return 0;
}