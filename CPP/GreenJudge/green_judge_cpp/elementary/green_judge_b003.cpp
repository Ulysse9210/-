#include<iostream>

using namespace std;

int main () {
    int n, i, m, biger = 0, smaller = 0;
    cin >> n;
    int number[n];
    for ( i = 0; i < n; ++i ) {
        cin >> number[i];
    }
    cin >> m;
    for ( i = 0; i < n; ++i ) {
        if ( number[i] > m ) {
            biger += 1;
        }
        else if ( number[i] < m ) {
            smaller += 1;
        }
    }
    cout << biger << ' ' << smaller << endl;

}