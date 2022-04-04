#include <iostream>
#include <iomanip>

using namespace std ;

/* Green Judge a50 */

int main () {
    int n, i1, i2 ;
    cin >> n ;
    for ( i1 = 1 ; i1 <= n ; ++i1 ) {
        for ( i2 = 1 ; i2 <= n ; ++ i2 ) {
            cout << i2 << "x" << i1 ;
            cout << "=" ;
            cout << setfill(' ') << setw(2) << i1 * i2 ;
            cout << "  " ;
        }
        cout << endl ;
    }
    return 0 ;
}