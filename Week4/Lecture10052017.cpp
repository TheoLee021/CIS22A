// Lecture10052017.cpp
// Alex Stoykov
// Examples of functions
// Function terminology
// Scope of variables: global, local, parameter

#include <iostream>
using namespace std;

int D; /// GLOBAL VARIABLE = don't use these!!!!
// GLOBAL variable is declared before and outside of all the other functions
/// Global variable can be accessed and changed
/// from any place/function in the program


//FUNCTION PROTOTYPES
void stars(); // function PROTOTYPE, "declare" a function
// function name is "stars"
// "void" is the return type, "void" means returns nothing
// parameters: none

int returnOne(); // function prototype
// function name is "returnOne"
// "int" is the return type, "int" means the function returns an integer
// parameters: none


void showNum(int num1); // function prototype
// function name is "showNum"
// "void" is the return type, "void" means returns nothing
// parameters: num1 (integer value)
// parameters are the variables in b/w the () of a function
// the parameter will receive a value that we pass into the function

double sum(double n1, double n2); // prototype
/// function name: sum
/// return type: double (function will return a double value, sum of n1+n2)
/// parameters: n1, n2

void passByValue(int B); // prototype

void functionB();
void functionA(int num);

/// p35 hint
void randomNum();

/// p36 hint
/// if valA is negative, return valA
/// if valB is negative, return valB
/// if both are negative, return valA + valB
/// if both are positive, return valA - valB
float returnNeg(float valA, float valB);

/// p37 hint
float average(float valA, float valB);

/// p38 Hint
string sleep(int time, bool isWeekend);


int main() // the main is the function where your program starts
{
    // GLOBAL VARIABLE can be used by all functions
    cout << "D = " << D;
    D = 100;


    stars(); // function CALL
    // as soon as we call the function stars()
    // the program jumps to the function definition
    // and executes everything between the {} of the function

    // Functons are a way to reuse your code
    // For example, the 10 lines of stars ****
    // can be replaced with two function calls
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;


      stars(); // function call
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;
//    cout << "*******" << endl;



    // CALLING A FUNCTION THAT RETURNS A VALUE
    returnOne(); // function call ... shows nothing
    // as soon as I call returnOne(), we are going to execute
    // everything within the {} of returnOne()


    cout << returnOne() << endl;
    int returnValue = returnOne();
    cout << returnValue << endl;



    // CALLING A FUNCTION THAT HAS A PARAMETER
    showNum(10); // function call
    ///     ^^ARGUMENT = value that we pass into the function
    /// as soon as you call the function showNum(10)
    /// the parameter num1 become equal to 10

    showNum(1000);
    //      ^^^^ ARGUMENT
    int A = 100;
    showNum(A); // ***same ... PASS BY VALUE
    ///     ^ ARGUMENT, we pass the value 100 into the function
    // the above is the equivalent of
    showNum(100); // ***same

    int B = 99;
    cout << "memory address of B in main() = " << &B << endl;
    /// 0x7fff5f496ad4

    cout << "B = " << B << endl;
    passByValue(B);
    cout << "B = " << B << endl;

    int C; // LOCAL VARIABLE
    // the variable C is local to the main() function
    // because C was declared in the main
    // the SCOPE of C is only the main() function
    // SCOPE refers to where a variable can be used/seen/changed
    // variable C can only be used in the main

    // functions calling other functions
    functionB();

    double a, b, t;
    cout << "enter value 1: ";
    cin >> a;
    cout << "enter value 2: ";
    cin >> b;



    /// p34b HINT
    cout << a << " + " << b << " = ";
    cout << sum(a,b) << endl;

    cout << 30 << " + " << 40 << " = ";
    cout << sum(30,40) << endl;
    ///         ^  ^ ARGUMENTS

    t = sum(a,b);
    ///     ^ ^ ARGUMENTS
    cout << a << " + " << b << " = ";
    cout << t << endl;

    /// p35 hint
    int iseed = time(NULL);
    srand(iseed);
    randomNum();

    /// p36 hint
    cout << returnNeg(-1,1) << endl; // -1
    cout << returnNeg(1,-1) << endl; // -1
    cout << returnNeg(-1,-1) << endl; // -1
    cout << returnNeg(1,1) << endl; // 0
    cout << returnNeg(0,0) << endl; // 0

    /// p37 hint
    cout << "the average of 2 and 4 is";
    cout << average(2,4) << endl;

    /// p38 Hint
    cout << sleep(1, true); // 1am and weekend, sleep
    cout << sleep(1, false);// 1am and not weekend, sleep
    cout << sleep(1300, false); // 1pm and not weekend, wake up



}



// FUNCTION DEFINITIONS

/// p38 hint
/// you can sleep if it is a weekend
/// if it is a weekday, you can't sleep if time is > 0900
string sleep(int time, bool isWeekend)
{
    //if (isWeekend == true)
    if (isWeekend) // same as the above
        return "sleep!!!";

    // if (isWeekend != true)
    // if (isWeekend == false)
    if (!isWeekend) // same as the two above
    {
        if (time < 900)
            return "sleep!!!";
    }
    return "Wake up!!";
}

/// p37 hint
float average(float valA, float valB)
{
    float avg = (valA + valB) / 2;
    return avg;
}

/// p36 HINT
/// if valA is negative, return valA
/// if valB is negative, return valB
/// if both are negative, return valA + valB
/// if both are positive, return valA - valB
float returnNeg(float valA, float valB)
{
    if (valA < 0)
        return valA;
    else if (valB < 0)
        return valB;
    else if (valA < 0 && valB < 0)
        return valA + valB;
    else if (valA > 0 && valB > 0)
        return valA - valB;
    return 0;
}

/// p35 hint
void randomNum()
{
    int min = -10;
    int max = 10;
    int randomVal = min + rand()%(max-min+1);
}

double sum(double n1, double n2)
{     ///         ^^         ^^ PARAMETERS
    double total;
    total = n1 + n2;
    return total;
}

// functions calling other function
void functionB()
{
    ///cout << "C = " << C << endl;
    ///                  ^^BAD b/c C is declared in the main

    functionA(123);
    //        ^^^ARGUMENT
}

void functionA(int num)
{
    cout << "num = " << num << endl;
}

void passByValue(int B)
{///                 ^ PARAMETER VARIABLE is a LOCAL VARIABLE
    /// A LOCAL VARIABLE can be used/seen/changed
    /// only in the code segment where it was defined
    // B is LOCAL to passByValue
    // the SCOPE of B is the passByValue function
    // SCOPE refers to where a variable can be used/seen/changed
    B = 0; /// does not change the value of 'B' in the main
    cout << "Memory address of B in passByValue is " << &B << endl;

    // variable C can only be used in the main
    // cout << "C = " << C << endl; // BAD

    // GLOBAL VARIABLE can be used by all functions
    D = 100;
    cout << " D = " << D << endl;
}

void showNum(int num1)
{
    cout << "num1 = " << num1 << endl;
}


int returnOne()
{
    return 1; // as soon as we reach return 1; , the program
    // will go back to where it was called
    // and return the value 1 where the function was called
    // the function exits as soon as we reach a return statement

    // the below will never show, because the function will exit
    // as soon as it reaches the return 1; statement
    cout << "Hello world!!! " << endl;
}


void stars()
{
    cout << "*******" << endl;
    cout << "*******" << endl;
    cout << "*******" << endl;
    cout << "*******" << endl;
    cout << "*******" << endl;
}


/*

*/