#include<iostream>

using namespace std;

int main () {
    int i, j;
    cin >> i;
    int number[i];
    for ( j=0; j<i; ++j ){
        cin >> number[j] ;
    }
    for ( j=i-1; j>=0; --j, --i){
        cout << number[i-1] << ' ';
    }
    cout << endl;

    return 0;
}