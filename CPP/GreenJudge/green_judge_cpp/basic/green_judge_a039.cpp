#include <iostream>

/* Green Judge a039 */

using namespace std ;

int main () {
    int a , b ;
    while (true) {
        cin >> a >> b ;
        if ( cin.fail() ) break ;
        if ( a > b ) {
            cout << "A " << a - b << endl ;
        }
        else if ( b > a ) {
            cout << "B " << b - a << endl ;
        }
        else {
            cout << "0" << endl ;
        }
    }
    return 0 ;
}