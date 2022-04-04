#include <iostream>

/* Green Judge a037 */

using namespace std ;

int main () {
    int a , b , n ;
    cin >> n ;
    while ( n > 0 ) {
        cin >> a >> b ;
        if ( a > b ) {
            cout << "A " << a - b << endl ;
        }
        else if ( b > a ) {
            cout << "B " << b - a << endl ;
        }
        else {
            cout << "0" << endl ;
        }
        n-- ;
    }
    return 0 ;
}