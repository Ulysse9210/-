#include<iostream>

using namespace std;

int main (){
    int n, t, s{0}, i{0};
    cin >> n >> t;
    while (true){
        s += n + s;
        if (s <= t){
            ++i;
        }
        else break;
    }
    cout << i << endl;
    return 0;
}