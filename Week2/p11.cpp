//  Your name: Theo Lee
//  Program Name: p11.cpp
//  Date:  10/07/2022
//  Description: Program to determine if the user can vote
//  The user can vote if they are over 18 year old, are citizen, and are registered.

#include <iostream>
using namespace std;

int main()
{
    int age;
    string citizen, registered;
    
    cout << "Program to determine if you can vote \n";
    cout << "How old are you? ";
    cin >> age;
    cout << "Are you a U.S. citizen? (yes/no): ";
    cin >> citizen;
    cout << "Have you registered to vote? (yes/no): ";
    cin >> registered;
    
    if ((age > 18) && (citizen == "yes") && (registered == "yes"))
        cout << "Congratulations you can vote.";
        
    else
    {
        cout << "\nYou cannot vote. \n";
    
            if (age < 18)
                cout << "-You must be over 18 to vote.\n";
            if (citizen == "no")
                cout << "-You must be a citizen to vote.\n";
            if (registered == "no")
                cout << "-You must be a register to vote.\n";
    }
        
    return 0;
}

/* === OUTPUT ===

===== Test run 1:
Program to determine if you can vote
How old are you? 20
Are you a U.S. citizen? (yes/no): yes
Have you registered to vote? (yes/no): yes
Congratulations you can vote.

===== Test run 2:
Program to determine if you can vote 
How old are you? 20
Are you a U.S. citizen? (yes/no): yes
Have you registered to vote? (yes/no): no

You cannot vote. 
-You must be a register to vote.

===== Test run 3:
Program to determine if you can vote 
How old are you? 20
Are you a U.S. citizen? (yes/no): no
Have you registered to vote? (yes/no): no

You cannot vote. 
-You must be a citizen to vote.
-You must be a register to vote.

===== Test run 4:
Program to determine if you can vote
How old are you? 17
Are you a U.S. citizen? (yes/no): no
Have you registered to vote? (yes/no): no

You cannot vote. 
-You must be over 18 to vote.
-You must be a citizen to vote.
-You must be a register to vote.


*/