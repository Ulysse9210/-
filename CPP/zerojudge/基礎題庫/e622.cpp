#include<iostream>

using namespace std;

int main(){
    int n, s, j{0};
    cin >> n >> s;
    int cp, iv, m{0},i{0};
    s /= 1000;
    while ( cin >> cp >> iv){
        if (iv >= 0 && iv <= 29){
            cp += 10*s;
        }
        else if (iv >= 30 && iv <= 39){
            cp += 50*s;
        }
        else {
            cp += 100*s;
        }
        if (cp > j){
            j = cp;
            i = m+1;
        }
        ++m;
    }
    cout << i << " " << j << endl;
    return 0;
}