// Ex3_03.cpp
// Demonstrating scope, lifetime, and global variables
#include<iostream>

using namespace std;

long count1{999L};      // Global count1
double count2{3.14};    // Global count2
int count3;             // Global count3 - default initialization

int main () 
{
    /* Function scope starts here */
    int count1{10};     // Hides global count1
    int count3{50};     // Hides global count3
    cout << "Value of outer count1  = " << count1 << endl;
    cout << "Value of global count1 = " << ::count1 << endl;
    cout << "Value of global count2 = " << count2 << endl;

    {
        /* New block dcope starts here... */
        int count1{20};     // This is a new variable that hides the outer count1
        int count2{30};     // This hides global count2
        cout << "\nValue of inner count1  = " << count1 << endl;
        cout << "Value of global count1 = " << ::count1 << endl;
        cout << "Value of inner count2  = " << count2 << endl;
        cout << "Value of global count2 = " << ::count2 << endl;
        
        count1 = ::count1 + 3;  // This sets inner count1 to global count1+3
        ++::count1;             // This changes global count1
        cout << "\nValue of inner count1  = " << count1 << endl;
        cout << "Value of global count1 = " << ::count1 << endl;
        count3 += count2;       // Increments outer count3 by inner count2

        int count4{};
    }   /* ...and ends here. */
    // cout << count4 << endl;  //count4 does not exist in this scope!

    cout << "\nValue of outer count1  = " << count1 << endl;
    cout << "Value of outer count3  = " << count3 << endl;
    cout << "Value of global count3 = " << ::count3 << endl;

    cout << "Value of global count2 = " << count2 << endl;
}   /* Function scope ends here */