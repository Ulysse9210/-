#include <iostream>

using namespace std ;

/* Green Judge a042 */

int main () {
    int n, m, i ;
    m = 13 ;
    i = 1 ;
    cin >> n ;
    while ( i < n) {
        m *= 13 ;
        m %= 100 ;
        ++i ;
    }
    m /= 10 ;
    cout << m << endl ;

    return 0 ;
}