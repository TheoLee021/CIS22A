// Theo Lee
// p73.cpp
// 12/10/2022
// Desctiption: Example Program for Classes and Object Oriented Programming

#include <iostream>
using namespace std;

class Dog
{
    // private means that
    // only public methods can change the variables
    private:
        float weight; // instance variable, every instance has its own weight
    public:
        // constructor
        Dog(float newWeight)
        {
            weight = newWeight;
        }
        // method to change the weight
        void changeWeight(float newWeight)
        {
            weight = newWeight;
        }
        // method to return the weight
        float getWeight() { return weight; }
        // method to show the weight
        void showWeight() { cout << weight << endl; }
};

int main()
{
    // use constructor to creat new instances
    // labrador and germanShepherd are the instance names
    Dog labrador(20);
    Dog germanShepherd(50);
    //                ^^^^CALLS THE CONSTRUCTOR
    cout << "labrador's weight = ";
    cout << labrador.getWeight() << endl;
    
    cout << "germanShepherd weight = ";
    germanShepherd.showWeight();

    germanShepherd.changeWeight(5);
    cout << "germanShepherd weight = ";
    cout << germanShepherd.getWeight() << endl;

    return 0;
}

/* == Sample Run:
labrador's weight = 20
germanShepherd weight = 50
germanShepherd weight = 5
===
*/