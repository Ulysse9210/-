#include <iostream>

using namespace std ;

/* Green Judge a049 */

int main () {
    int n, i1, i2, i3, i4 ;
    cin >> n ;
    for ( i1 = 0 ; i1 < n ; ++i1 ) {
        i3 = i1 % 3 ;
        for ( i2 = 1 ; i2 <= n ; ++i2 ) {
            if ( i3 % 3 == 0 ) {
                cout << "@" ;
            }
            else {
                cout << "-" ;
            }
            --i3 ;
        }
        cout << endl ;
    }
}