#include <iostream>

using namespace std ;

/* Green Judge a040 */

int main () {
    int a, b, n, i ;
    cin >> n ;
    for ( i = 1; i <= n ; ++i ) {
        cin >> a >> b ;
        if ( a == 0 && b == 0 ) break ;
        cout << "Case " << i << ": " ;
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
}