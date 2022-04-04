#include <iostream>
#include <cmath>

/* Green_Judge_a035 */

using namespace std ;

int main () {
    double a , b , c ;
    int ans ;
    cin >> a >> b ;
    c = b * log10( a ) ;
    ans = floor( c ) ;
    cout << ans + 1  << endl ;
    return 0 ;
}