#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main (){
    int ans = 0, i, j, sum;
    for (j = 0; j < 3; ++j){
        sum = 0;
        string st;
        cin >> st;
        for (i = 0; i < st.size(); ++i){
            if (isdigit(st[i])){
                sum = sum*10 + st[i] - '0';
            }
        }
        ans += sum;
    }
    cout << ans << endl;
    return 0;
}