//  Your name: Theo Lee
//  Program Name: p7.cpp
//  Date:  10/07/2022
//  Description: Selection sample program

#include <iostream>
using namespace std;

int main()
{
    int Age; //DECLARING
    cout << "Please enter age: "; //PROMPT
    cin >> Age; //USER ENTERS INTEGER AGE VALUE
    
    // IF, ELSE IF CHAIN
    if (Age < 0)
    { // an IF gets checked ALWAYS to see if condition is TRUE/FALSE
      // if condition is TRUE, cout reads "Age is Less than zero, invalid age"
       cout << "Age is LESS than"; // 1st statement
       cout << " zero, invalid age "; // 2nd statement
    }
    
    else if (Age < 18)  //ELSE IF get check ONLY when previous IF is FALSE
    {   //if TRUE, reads "Age is LESS than 18"
        cout << "Age is LESS than 18";
    }
    
    else if (Age == 20) //gets check only when the PREVIOUS ELSE IF is FALSE
    //{ curly brackets are optional if there is only 1 statement
        cout << "Age is EQUAL to 20";   // One statement only
    //}
    
    else if (Age != 21) //gets checked only when previous ELSE IF is FALSE
        cout << "Age is NOT EQUAL to 21";
        
    else    //happens automatically when previous ELSE IF is FALSE
        cout << "Age must be (not < 0), (not < 18), (not == 20) and (not !=21)";
        
    //OR (||): One of the conditions must be true for IF to happen
    // if (condition 1) || (condition 2)
    if ( (Age < 0) || (Age > 123) )
        cout << "Age is either less than 0 or greater than 123";
    
    // AND (&&): BOTH of the conditions must be TRUE for the IF to happen
    // if (condition 1) && (condition 2)
    if ( (Age > 18) && (Age < 21) )
        cout << "Age is BOTH (greater than 18) AND (less than 21)" << endl;
    
    //NESTED IF's, an IF inside another IF
    if (Age > 18)
        if (Age < 21)
        {
            cout << "Age is BOTH (greater than 18)";
            cout << " AND (less than 21)" << endl;
        }

    return 0;   // this is where the program ends
}

/* === OUTPUT ===

Please enter age: -10
Age is LESS than zero, invalid age Age is either less than 0 or greater than 123
===
Please enter age: 165
Age is NOT EQUAL to 21Age is either less than 0 or greater than 123
===
Please enter age: 15
Age is LESS than 18
===
Please enter age: 20
Age is EQUAL to 20Age is BOTH (greater than 18) AND (less than 21)
Age is BOTH (greater than 18) AND (less than 21)
===
Please enter age: 21
Age must be (not < 0), (not < 18), (not == 20) and (not !=21)

*/