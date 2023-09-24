// Theo Lee
// p74.cpp
// 12/10/2022
// Desctiption: Example Program for Classes and Object Oriented Programming

#include <iostream>
using namespace std;

class Human
{
    private:
        int age;
    public:
        Human(int newAge)
        {
            age = newAge;
        }
        void changeAge(int newAge)
        {
            age = newAge;
        }
        void showAge() { cout << age << endl; }
};

int main()
{
    Human grownUp(20);
    Human child(10);

    cout << "grownUp age = ";
    grownUp.showAge();

    cout << "child age = ";
    child.showAge();

    child.changeAge(15);
    
    cout << "child age = ";
    child.showAge();

    return 0;
}

/* == Sample Run:
grownUp age = 20
child age = 10
child age = 15
===
*/