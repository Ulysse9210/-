// free parking
#include <iostream>

using namespace std;

int main (){
    int n, a, b, c;
    cin >> n;
    for (int i{0}; i < n; ++i){
        int k{0};
        cin >> a >> b >> c;
        for (int j{a+1}; j < b; ++j){
            if (j%c != 0){
                cout << j << " ";
                ++k;
            }
        }
        if (k==0) {
            cout << "No free parking spaces.";
        }
        cout << endl;
    }
    return 0;
}