//  Theo Lee
//  p34.cpp
//  10/22/2022
//  Sample Program, Functions:
//  prototype, call, definition, parameter, return value

// typesOfFunctions.cpp
// TYPES OF FUNCTIONS
#include <iostream>
using namespace std;

// FUNTION PROTOTYPES:
void showMessage();
void aParameter(int parameter_variable);
int returnValue(int num1, int num2);
// === END OF FUNCTION PROTOTYPES

int main() // THE main() FUNCTION STARTS THE PROGRAM
{
    // FUNCTION "CALL", "CALL" EXECUTES THE DEFINITION
    showMessage();

    aParameter(10); // 10 is the "ARGUMENT"
    // calling aParameter(10) makes parameter_variable = 10

    int add = returnValue(20,30);
    cout << "add = " << add << endl;
    return 0;
}

// A FUNCTION THAT "SHOWS" something (cout<<)
// FUNTION DEFINITION:

void showMessage()
{
    cout << "Hello World!" << endl;
}

// A FUNCTION THAT "SHOWS" something (cout<<)
// FUNTION DEFINITION:

void aParameter(int parameter_variable)
{
    cout << "parameter_variable = " << parameter_variable << endl;
}

// A FUNCTION THAT "RETURNS" something "return"
// FUNCTION DEFINITION:
int returnValue(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

/* === OUTPUT ===
Hello World!
parameter_variable = 10
add = 50
===
*/

//  Theo Lee
//  p34.cpp
//  10/22/2022
//  Sample Program, Variables:
// (local, global, parameter) and Scope:

/* 
variableScopes.cpp
Examples of Global and Local variables
"Scope" refers to "where a variable can be used"

If a variable is declared inside of a function:
-then the variable is "Local" and it belongs only to that function
-such variable can be "seen" only by the function where it was declared.
-The "Scope" of a "Local" variable is its function.
-Parameter variables are Local and have a scope of only their function
(a Local variable can only be used inside the function where it was declared)

If a variable is declared outside(and before) all other functions
-then the variable is "Global", and it belongs to all functions
-changing a "Global" variable in one function, changes it for all functions
-The "Scope" of a "Global" variable are all functions
(a Global variable can be used inside all functions)
 */
#include <iostream> // ==== TYPE THIS PROGRAM *INCLUDING* THE COMMENTS ====
using namespace std;

int Global_Variable = 1; // Declared before and outside all other functions
// FUNCTION PROTOTYPE:
void aFunction(int parameterVariable); // Declared inside the ( )

int main()
{
    int Local_Variable = 5; // Declared inside the main()
    cout << "===Inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // show 1
    Global_Variable = 10;
    cout << "Global_Variable = " << Global_Variable << endl; // shows 10

    aFunction(50);
    cout << "\n===Back Inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // shows 100
    return 0;
}
// FUNCTION DEFINITION:
void aFunction(int parameterVariable)
{
    // different Local_Variable from the one in the main()
    // does not change Local_Variable in main()
    int Local_Variable = parameterVariable; // Declared inside aFunction(int parameterVariable)
    cout << "\n===== Inside aFunction() :" << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // shows 50
    cout << "Global_Variable = " << Global_Variable << endl; // shows 10
    cout << "===== End Inside aFunction()=====" << endl;
    Global_Variable = 100; // will change Global_Variable in the main()
}
/* === OUTPUT ===
===Inside the main(): 
Local_Variable = 5
Global_Variable = 1
Global_Variable = 10

===== Inside aFunction() :
Local_Variable = 50
Global_Variable = 10
===== End Inside aFunction()=====

===Back Inside the main(): 
Local_Variable = 5
Global_Variable = 100
===

*/