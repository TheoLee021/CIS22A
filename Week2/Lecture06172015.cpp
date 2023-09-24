#include <iostream>
using namespace std;

int main()
{
    // === Rules for Variable Names ===
    // 1) Can't start with a number
    // 2) Can't have spaces
    // 3) Can't have special characters: $%#@
    // 4) No reserved words: cout, cin, int, main, using, etc.
    // 5) Can only have Upper/Lower case letters, numbers, _

/*
    // Declaring a variable age to be of integer type
    int age, weight, height;
    age = 10; // Initializing variable age to a value of 10
    weight = 50;

    cout << "\"" << endl; // shows "
    cout << "\\"; // shows backward slash
    cout << "\n"; // shows a new line

    // GIVE YOURSELF MEANINGFUL PROMPTS
    // USE one input per Prompt
    cout << "Please enter a height:";
    cin >> height;
    cout << "Please enter a age:";
    cin >> age;
    cout << "Please enter a weight:";
    cin >> weight;

    // === DO NOT JUST HAVE:
    cout << " Please enter height, age, weight";
    cin >> height >> age >> weight;

    // SHORTHAND OPERATORS
    int counter = 1;
    counter = counter + 1; // counter = 1 + 1 = 2
    counter = counter + 10;// counter = 2 + 10 = 12
    counter += 10; // counter = counter + 10 = 12 +10 = 22
    counter = counter + 1; // same as counter +=1
                           // same as counter++;

    // STRING data type, anything enclose in quotes
    string name = "Alex#*@$@* Stoykov";
    cout << "name = " << name << endl;
    // EXAMPLE WITH ASCII VALUE
    int value = 'A';
    cout << "value = " << value << endl; // shows 65

    // BOOLEAN DATA TYPE
    // BOOLEAN is either True/False (1/0)
    bool t = true; // true = 1
    cout << "t = " << t << endl; // shows 1
    bool f = false; // false = 0
    cout << "f = " << f << endl; // shows 0

    // MODULO, REMAINDER OPERATOR
    cout << "4%3 = " << 4%3 << endl; //shows 1
    // How many time does 3 fit into 4? 1
    // 4 - 1*3 = 4 - 3 = 1
    cout << "5%3 = " << 5%3 << endl; //shows 2
    // How many time does 3 fit into 5? 1
    // 5 - 1*3 = 5 - 3 = 2
    cout << "6%3 = " << 6%3 << endl; //shows 0
    // How many time does 3 fit into 6? 2
    // 6 - 2*3 = 6 - 6 = 0

    int oddEven = 3;
    // SHOW THE MESSAGE THAT oddEven is even or odd
    cout << "oddEven = " << oddEven << endl;
    cout << "oddEven % 2 == 0 evaluates to: " ;
    cout << (oddEven%2 == 0) << " false is 0" << endl;
    if (oddEven%2 == 0) // EVEN
    {
        cout << oddEven;
        cout << "is even" << endl;
    }

    cout << "oddEven % 2 != 0 evaluates to: " ;
    cout << (oddEven%2 != 0) <<  " true = 1" << endl;
    if (oddEven%2 != 0) // ODD
        cout << oddEven << "is odd" << endl;

    int Age;
    cout << "Please enter an Age: ";
    cin >> Age;
    // invalid age is < 0 or greater than 123
    if (Age < 0 || Age > 123)
        cout << "You entered an invalid age!" << endl;
    else
        cout << "You entered a valid age!" << endl;

    // if minor age must be less than 18
    if (Age < 18 && Age >=0)
        cout << "You are a minor" << endl;
    // can have a drink if Age is greater than or equal to 21
    else if (Age >= 21)
        cout << "You can have drink " << endl;
    else if (Age >= 18 ) {
        if (Age < 21){ // same as if(Age >=18 && Age <21)
            cout << "You are between 18 and 21" << endl;
        }
    }

    /*
    // RELATIONAL OPERATORS:
    A == B  checks if A is EQUAL to B
    A != B  checks if A is NOT equal to B
    A >  B  checks if A is greater than B
    A >= B  checks if A is greater than or equal to B
    A <  B  checks if A is less than B
    A <= B  checks if A is less than or equal to B

    AND && evaluates to TRUE if BOTH conditions are true
    Age < 18 && Age >=0
        T           T    Evaluates to T
        T           F    Evaluates to F
        F           T    Evaluates to F
        F           F    Evaluates to F

    OR || evaluates to TRUE if ONE of the conditions is true
    Age < 0 || Age > 123
        T          T    Evaluates to T
        T          F    Evaluates to T
        F          T    Evaluates to T
        F          F    Evaluates to F


*/
    int Age;
    string citizenship, registered;;
    cout << "Are  you a citizen (yes/no)";
    cin >> citizenship;
    cout << "Are you registered (yes/no)";
    cin >> registered;
    cout << "Please enter age: ";
    cin >> Age;
    if (citizenship == "yes" && registered=="yes" && Age >= 18)
        cout << "congratulations you can vote" << endl;
    if (citizenship == "yes" && registered=="yes" && Age < 18)
        cout << "You can't vote, too young" << endl;
    if (citizenship == "yes" && registered=="no" && Age < 18)
        cout<<"You can't vote, too young and not registered"<<endl;
    return 0;
}
/*
Are  you a citizen (yes/no)yes
Are you registered (yes/no)yes
Please enter age: 21
congratulations you can vote

Process returned 0 (0x0)   execution time : 5.802 s
Press any key to continue.


Are  you a citizen (yes/no)yes
Are you registered (yes/no)yes
Please enter age: 16
You can't vote, too young

Process returned 0 (0x0)   execution time : 21.503 s
Press any key to continue.

*/
