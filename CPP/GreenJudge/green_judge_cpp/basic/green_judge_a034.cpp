#include <iostream>
#include <iomanip>
#include <cmath>

/* Green Judge a034 */

using namespace std ;
int main()
{
    double x1 , y1 , x2 , y2 , d ;
    cin >> x1 >> y1 >> x2 >> y2 ;
    x1 -= x2 ;
    y1 -= y2 ;
    d = pow ( x1 , 2 ) + pow ( y1 , 2 ) ;
    cout << fixed << setprecision ( 3 ) << sqrt ( d ) << endl ;

    return 0 ;
}