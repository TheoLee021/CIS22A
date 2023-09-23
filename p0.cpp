// program number: p0.cpp
// Your name: Alex S.
// Date Started - Date Finished: 08/31/17
// Description: What is the program supposed to do
// ^^^ these 4 lines of comments are worth 30% of your grade

// COMMENT, anything that starts with //
// comments are not considered part of your program/code
// comments are just explanation for your code

#include <iostream>
using namespace std;

int main()
{
    // OUTPUT = information comes OUT of the program
    cout << "Hello" << endl;
    //              ^^^^^^^ INSERT A NEW LINE
    // cout << is how we show output in C++

    // DIFFERENT TYPES OF INFORMATION = "DATA TYPES"
    // Whole Numbers, Decimal Numbers, Characters, Text
    // Whole Num = Integer
    // Decimal Num = Float, Double
    // Characters are anything in ' ' (single quotes)
    // Text is anything in " " (double quotes)

    // VARIABLES = words we make up to refer to places in memory where information is stored

    // Declaring variables = reserving these words as variable names and of specific data type
// DATA_TYPE    VARIABLE_NAME
    int          age; // integer
    float        weight; // decimal
    double       E;     // decimal
    char         Letter; // character
    string       Text;  // String
    string       firstName;

    // Rules for variable names:
    // 1) Can't start with a number
    // 2) Can't have spaces
    // 3) No special characters:!@#$%^&* ... only underscore _ is allowed
    // 4) Can't use reserved words: cout, char, int, float, double
    // 5) Use meaningful variable names

    cout << "age = "          << age << endl; // age = 32767
    //      ^^^^^^^^ LABEL       ^^^ content stored in the variable

    // INITIALIZE THE VARIABLES (because values in them will be "garbage"
    age = 9;
    cout << "age = " << age << endl;
    weight = 10.5;
    E = 1.234566;
    Letter = 'A';
    Text = "Hello World!!";

    // INPUT = information that goes into the program
    cout << "Enter a new integer value for age:";
    //      ^^^^^^^^^^^^^^^^^^^^^^^^^^^^ PROMPT = tell the user what to enter
    cin >> age; // INPUT: using cin >> we can get information from the keyboard
    cout << "you entered: "<< age << endl;

    // INPUT of a float/double
    cout << "Weight = " << weight << ", enter a new value:";
    cin >> weight;
    cout << "You entered " << weight << endl;

    // INPUT OF a character
    cout << "Enter a new letter:";
    cin >> Letter;
    cout << "Letter = " << Letter << endl;

    // INTEGER arithmetic
    cout << "3/4 = " << (3/4) << endl;
    //                   ^^^^0, because C++ thinks that since you are dividing one integer by another integer, then result should also be integer
    //FIX
    cout << "3.0/4.0 = " << (3.0/4.0) << endl;


    // Bit = smallest piece of information: 0 (off), 1 (on)
    // BIT(Binary)    Decimal
    //  _
    //  0              0
    //  1              1
    // _ _
    // 0 0             0
    // 0 1             1
    // 1 0             2
    // 1 1             3

    // _    _  _  _  _ _ _ _ = 8 Bits = 1 Byte
    // 128  64 32 16 8 4 2 1
    // 1    1  1  1  1 1 1 1 = 128+64+32+16+8+4+2+1 = 255
    //                             64+32+16+8+4+2+1 = 127

    // p2 Hint
    cout << "************************************************" << endl;
    cout << " \n"; // \n is the same as << endl;
    cout << "        C C C                 S S S\n";
    cout << "      C       C              S     S\n";
    // You do the rest

    // p3 Hint- use your p1 as a starting point

    // p4 Hint

    char L;
    cout <<"Enter a letter:";
    cin >> L;
    cout << "************************************************\n";
    cout << "\n";
    cout << "        "<<L<<" "<<L<<" "<<L<<"\n";
    cout << "      "<<L<<"      "<<L<<"\n";


}

/* MULTILINE COMMENTS: show how your program ran(30% of your grade)

Hello
age = 0
age = 9
Enter a new integer value for age:1
you entered: 1
Weight = 10.5, enter a new value:1
You entered 1
Enter a new letter:1
Letter = 1
3/4 = 0
3.0/4.0 = 0.75
************************************************

        C C C                 S S S
      C       C              S     S
Enter a letter:A
************************************************

        A A A
      A      A

Process finished with exit code 0
 */