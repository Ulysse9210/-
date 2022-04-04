#include <iostream>

using namespace std ;

/* Green Judge a044 */

int main () {
    int n, s, i ;
    cin >> n ;
    s = 0 ;
    for ( i = 1 ; i < n ; ++i ) {
        if ( n % i == 0 ) {
            s += i ;
        }
    }
    if ( s > n ) {
        cout << "Abundant" << endl ;
    }
    else if ( s == n ) {
        cout << "Perfect" << endl ;
    }
    else {
        cout << "Deficient" << endl ;
    }

    return 0 ;
}