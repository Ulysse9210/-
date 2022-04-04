#include<iostream>

using namespace std;
int main () {
    int k(-7);
    char ch;
    while (cin >> ch){
        cout << char(int(ch)+k);
    }
    cout << endl;
    return 0;
}