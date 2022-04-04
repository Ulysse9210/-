#include<iostream>

using namespace std;

long long int c=0;
long long int f(long long int n){
    c++;
    if (n==0) return 0;
    else if (n==1) return 1;
    else return f(n-1)+f(n-2);
}
int main (){
    int n;
    while (cin >> n){
        cout << f(n) << " ";
        cout << c << endl;
    }
    return 0;
}