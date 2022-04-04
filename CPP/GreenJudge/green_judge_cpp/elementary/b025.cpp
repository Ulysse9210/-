#include <iostream>

using namespace std;

int main (){
    int n, m;
    cin >> n >> m;
    long long int f[33][33];
    for (int i = 0; i < 33; ++i){
        f[i][0] = 1;
        f[0][i] = 1;
    }
    for (int i = 1; i <= n; ++i){
        for (int j = 1; j <= m; ++j){
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    cout << f[n][m] << endl;
    return 0;
}