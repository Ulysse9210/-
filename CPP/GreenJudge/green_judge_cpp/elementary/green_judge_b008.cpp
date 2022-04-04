#include<iostream>
#include<string>

using namespace std;
int main (){
    string str;
    cin >> str;
    int time, j, f;
    f = 0;
    j = str.size() -1;
    if (str.size()%2 == 0) time = str.size();
    else time = str.size() - 1;
    time /= 2;
    for (int i=0; i < time; ++i, --j){
        if (str[i] == str[j]) f = 1;
        else {
            f = 0;
            break;
        }
    }
    if (f==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}