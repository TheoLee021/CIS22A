/*
    p4.cpp
    Theo Lee
    10/01/22
    Description: program that reads in two decimal numbers and then outputs their sum and product
*/

#include <iostream>
using namespace std;

int main()
{
  float number1, number2, Sum, Product;
    cout << "Press return after entering a number. \n";
    cout << "Please enter number 1: ";
    cin >> number1;
    cout << "Please enter number 2: ";
    cin >> number2;

    // PROCESSING (math calculation)
    Sum = number1 + number2;
    Product = number1 * number2;
    printf("Sum = %.1f \n", Sum);
    printf("Product = %.2f \n", Product);

    return 0;
}

/* === OUTPUT ===
Press return after entering a number.
Please enter number 1: 1.11
Please enter number 2: 2.22
Sum = 3.3
Product = 2.46
*/
