/*********\
 * 求ＧＣＤ
\*********/
#include <iostream>

using namespace std;

int f (int a, int b){
    int k;
    while (b != 0){
        k = a % b;
        a = b;
        b = k;
    }
    return a;
}

int main (){
    int a, b;
    cin >> a >> b;
    cout << f(a, b) << endl;
    return 0;
}