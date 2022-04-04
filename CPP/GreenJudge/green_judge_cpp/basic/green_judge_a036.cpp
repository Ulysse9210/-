#include <iostream>

/* Green_Judge_a036 */

using namespace std ;

int main () {
    int a , b ;
    cin >> a >> b ;
    if ( a > b ) {
        cout << "A " << a - b << endl ;
    }
    else if ( b > a ) {
        cout << "B " << b - a << endl ;
    }
    else {
        cout << "0" << endl ;
    }
    return 0 ;
}