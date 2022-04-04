// PPAP
#include <iostream>
#include <string>

using namespace std;

int main () {
    string ppap[4]{"Pen", "Pineapple", "Apple", "Pineapple pen"};
    int n, k, i{1};
    cin >> n;
    while (true){
        k += 4*i;
        if ( k >= n) {
            k -= 4*i;
            n -= k;
            break;
        }
        ++i;
    }
    if (n%i == 0) {
        cout << ppap[(n/i)-1] << endl;
    }
    else {
        cout << ppap[(n/i)] << endl;
    }

    return 0;
}