#include <iostream>
using namespace std;
 
// function declaration:
double getAverage(int arr[], int size);

int main () {
   // an int array with 5 elements.
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   // pass pointer to the array as an argument.
   avg = getAverage( balance, 5 ) ;
    
   // output the returned value 
   cout << "Average value is: " << avg << endl;

   for (int x:balance)
        cout << x;

   return 0;
}

double getAverage(int arr[], int size)
{
    int sum = 0, Avg;
    for(int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return Avg = sum/5;
}