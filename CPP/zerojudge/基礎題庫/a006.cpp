#include<iostream>
#include<cmath>

using namespace std;
int main (){
    int a, b, c, d;
    cin >> a >> b >> c;
    d = pow(b,2)-(4*a*c);
    if (d<0) cout << "No real root" << endl;
    else if (d==0) cout << "Two same roots x=" << (-1)*(b/(2*a)) << endl;
    else cout << "Two different roots x1=" 
    << ((-1)*b+sqrt(d))/(2*a) << " , x2=" << ((-1)*b-sqrt(d))/(2*a) << endl;
    return 0;
}