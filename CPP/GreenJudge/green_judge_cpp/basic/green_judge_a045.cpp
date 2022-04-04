#include <iostream>
#include <cmath>

using namespace std ;

/* Green Judge a045 */

int main () {
    int n, s, i ;
    cin >> n ;
    s = 0 ;
    for ( i = 2 ; i <= sqrt( n ) ; ++i ) {
        if ( n % i == 0 ) {
            s += i ;
            break ;
        }
    }
    if ( s == 0 && n != 1 ) {
        cout << "YES" << endl ;
    }
    else {
        cout << "NO" << endl ;
    }

    return 0 ;
}