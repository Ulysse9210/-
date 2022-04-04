#include<iostream>

using namespace std;

int main (){
    int r, a, b;
    cin >> r >> a;
    if (a == r) {
        a -= 3;
    }
    b = r - a;
    if (a <= b){
        cout << a << "+" << b << "=" << r << endl;
    }
    else {
        cout << b << "+" << a << "=" << r << endl;
    }
    return 0;
}