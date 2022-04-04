#include <iostream>

using namespace std ;

/* Green Judge a046 */

int main () {
    int w, h, i1, i2 ;
    cin >> w >> h ;
    for ( i1 = 0 ; i1 < h ; ++i1 ) {
        for ( i2 = 0 ; i2 < w ; ++i2 ) {
            cout << "#" ;
        }
        cout << endl ;
    }
    return 0 ;
}