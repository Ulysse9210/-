#include<iostream>

using namespace std;
int main (){
    int b;
    cin >> b;
    for (int j=0; j<b; ++j){
        int a[4];
        for (int i=0; i<4; ++i){
            cin >> a[i];
        }
        if (a[1]-a[0] == a[3]-a[2]){
            for (int i=0; i<4; ++i){
                cout << a[i] << ' ';
            }
            cout << a[3]+(a[1]-a[0]) << endl;
        }
        else {
            for (int i=0; i<4; ++i){
                cout << a[i] << ' ';
            }
            cout << a[3]*(a[1]/a[0]) << endl;
        }
    }
    return 0;
}