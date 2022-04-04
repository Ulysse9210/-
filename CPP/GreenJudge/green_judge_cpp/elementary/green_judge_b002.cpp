#include<iostream>

using namespace std;

int main () {
    int i, j;
    cin >> i;
    int number[i];
    for ( j=0; j<i; ++j) {
        cin >> number[j] ;
    }
    int big = number[0], bigi = 1;
    for ( j=0; j<i; ++j) {
        if ( big <= number[j] ) {
            big = number[j];
            bigi = j+1;
        }
    }
    cout << bigi << ' ' << big << endl;

    return 0;
}