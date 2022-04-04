#include <iostream>

using namespace std ;

/* Green Judge a043 */

int main () {
    int a, b ;
    cin >> a >> b ;
    while ( a != 0 && b != 0 ) {
        if ( a > b ) {
            a %= b ;
            if ( a == 0 ) {
                cout << b << endl ;
                break ;
            }
        }
        else {
            b %= a ;
            if ( b == 0 ) {
                cout << a << endl ;
                break ;
            }
        }
    }

    return 0 ;
}