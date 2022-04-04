#include <iostream>

using namespace std ;

/* Green Judge a041 */

int main () {
    int n ;
    cin >> n ;
    int m ;
    for (m = n ; m >= 5 ; m -= 4) {
        n += 1 ;
    }
    cout << n << endl ;

    return 0 ;
}