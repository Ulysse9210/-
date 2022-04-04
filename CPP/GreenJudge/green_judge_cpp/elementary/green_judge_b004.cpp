#include<iostream>

using namespace std;
int main (){
    unsigned int n,m;
    cin >> n >> m;
    unsigned int a[n];
    for (int i=0; i<n; ++i){
        a[i] = 0;
    }
    for (int b,i=0; i<m; ++i){
        cin >> b;
        a[b-1] = 1;
    }
    for (int i=0; i<n; ++i){
        if (a[i]==0)    cout << i+1 << " ";
    }
    return 0;
}