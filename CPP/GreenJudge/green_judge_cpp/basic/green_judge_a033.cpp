#include <iostream>
#include <iomanip>

/* Green Judge a033 */

using namespace std ;

int main () {
    int number ;
    cin >> number ;
    if ( number >= 10000 ){
        number %= 10000 ;
        cout << "|____" ;
        cout << setfill('0') << setw(4) << number << '|' << endl ;
    }
    else {
        number %= 10000 ;
        cout << "|____" ;
        cout << setfill('_') << setw(4) << number << '|' << endl ;
    }
    return 0 ;
}
