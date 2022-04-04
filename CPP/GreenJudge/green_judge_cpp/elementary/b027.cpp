#include <iostream>
#include<algorithm>

using namespace std;

int min (int a, int b, int c){
    int ans[3];
    ans[0] = a;
    ans[1] = b;
    ans[2] = c;
    sort (ans, ans+3);
    return ans[0];
}

int main (){
    int n, m;
    cin >> n >> m;
    int tree[n][m], b[n][m];
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            cin >> tree[i][j];
        }
    }
    for (int i = 0; i < n; ++i){
        if (tree[i][0] == 1) b[i][0] = 0;
        else b[i][0] = 1;
    }
    for (int i = 0; i < m; ++i){
        if (tree[0][i] == 1) b[0][i] = 0;
        else b[0][i] = 1;
    }
    for (int i = 1; i < n; ++i){
        for (int j = 1; j < m; ++j){
            if (tree[i][j] != 0) b[i][j] = 0;
            else {
                b[i][j] = min(b[i-1][j], b[i][j-1], b[i-1][j-1]) + 1;
            } 
        }
    }
    int ans = 0;
    for (int i = 0; i < n; ++i){
        for (int j = 0; i < m; ++j){
            if (b[i][j] > ans) ans = b[i][j];
        }
        cout << ans << endl;
    }
    return 0;
}