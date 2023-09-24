#include <iostream>

class Human
{
private:
    int age;

public:
    Human(int newAge) : age{newAge} {}

    void changeAge(int newAge) { age = newAge; }

    void showAge() const { std::cout << age << std::endl; }
};

int main()
{
    Human grownUp{20};
    Human child{10};

    std::cout << "grownUp age = ";
    grownUp.showAge();

    std::cout << "child age = ";
    child.showAge();

    child.changeAge(15);

    std::cout << "child age = ";
    child.showAge();

    return 0;
}
/*
Some of the changes that I made include:
Using the member initialization list to initialize the age member in the constructor, rather than assigning it inside the body of the constructor. This can help to avoid unnecessary code duplication and can make the code more efficient, because the assignment to the age member will be performed at the same time as the object's initialization, rather than afterward.
Removing the using namespace std; directive, which is considered bad practice because it can cause name clashes and other unintended consequences. Instead, I qualified the names of standard library entities with std::, such as std::cout and std::endl.
Adding the const keyword to the showAge() member function, to indicate that it does not modify the object's state. This can help to prevent unintended modifications and can also allow the function to be called on const objects.
*/