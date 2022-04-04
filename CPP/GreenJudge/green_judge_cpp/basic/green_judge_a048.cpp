#include <iostream>

using namespace std ;

/* Green Judge a048 */

int main () {
    int n, i1, i2, i3 ;
    cin >> n ;
    i3 = n ;
    for ( i1 = 1 ; i1 <= n ; ++i1 ) {
        for ( i2 = 1 ; i2 < i3 ; ++i2 ) {
            cout << "_" ;
        }
        --i3 ;
        for ( i2 = 0 ; i2 < 2 * i1 -1 ; ++i2 ) {
            cout << i1 ;
        }
        cout << endl ;
    }
    
    return 0 ;
}