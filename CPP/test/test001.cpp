#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main (){
    cout << abs(-10) << endl;
    string a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    while (cin >> a){
        if (a == "#"){
            break;
        }
        cin >> b;
        cout << a << " " << b << endl;
    }
    return 0;
}