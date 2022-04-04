#include <iostream>

using namespace std ;

/* Green Judge a047 */

int main () {
    int n, i1, i2 ;
    cin >> n ;
    for ( i1 = 1 ; i1 <= n ; ++i1 ) {
        for ( i2 = 0 ; i2 < i1 ; ++i2 ) {
            cout << i1 ;
        }
        cout << endl ;
    }

    return 0 ;
}