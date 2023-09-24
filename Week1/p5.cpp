/*
    p5.cpp
    Theo Lee
    10/01/22
    Description: program that asks for a character INPUT from the keyboard and then OUTPUTS a large block letter 
    "C" composed of that character
*/

#include <iostream>
using namespace std;

int main()
{
    char L;
    cout << "Enter a Letter: ";
    cin >> L;
    
    cout << "************************************************" << endl;
    cout << "\n";
    cout << "            " << L << " " << L << " " << L << "                 " << endl;
    cout << "          " << L << "      " << L << "              " << endl;
    cout << "         " << L << "                      " << endl;
    cout << "        " << L << "                        " << endl;
    cout << "        " << L << "                          " << endl;
    cout << "        " << L << "                                " << endl;
    cout << "         " << L << "                      " << endl;
    cout << "          " << L << "      " << L << "              " << endl;
    cout << "            " << L << " " << L << " " << L << "                   " << endl;
    cout << " \n";
    cout << "**************************************************" << endl;
    cout << "    Computer Science is Cool Stuff!!" << endl;
    
    return 0;
}

/* === OUTPUT ===
Enter a Letter: T
************************************************

            T T T                 
          T      T              
         T                      
        T                        
        T                          
        T                                
         T                      
          T      T              
            T T T                   
 
**************************************************
    Computer Science is Cool Stuff!!
*/
