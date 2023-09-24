#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>, int size);

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    cout << "v.size() = " << v.size() << endl;
    cout << "sizeof(v) = " << sizeof(v) << endl;
    cout << "v.capacity() = " << v.capacity() << endl;

    vector <string> vs;
    vector <char> vc;
    vector <double> vd;
    
    return 0;
}

void printVector(vector<int>, int size)
{

}