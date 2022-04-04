#include<iostream>
#include<string>

using namespace std;
int main () {
    string eg, str;
    int f;
    cin >> eg >> str;
    for (int i=0, j=0; i<str.size()&&j<eg.size(); ++i){
        if (str[i]== eg[j]){
            ++j;
            f=1;
        }
        else f=0;
    }
    if (f==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}