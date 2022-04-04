/*************\
 * 求Ｎ項的ＧＣＤ
\*************/
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
    int n, a, b;
    cin >> n >> a;
    for (int i = 1; i < n; ++i){
        cin >> b;
        a = f(a, b);  
    }
    cout << a << endl;
    return 0;
}