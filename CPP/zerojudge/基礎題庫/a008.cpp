#include<iostream>

using namespace std;
int main (){
    int n, i, count, beg;
    while(cin >> n){
        beg = 1;
        i = 2;
        while (n != 1){
            count = 0;
            while (n%i == 0){
                ++count;
                n /= i;
            }
            if (count == 0){
                ++i;
                continue;
            }
            if (beg == 1){
                if (count > 1){
                    cout << i << "^" << count; 
                }
                else {
                    cout << i ;
                }
                beg = 0;
            }
            else if (beg == 0){
                if (count > 1){
                    cout << " * " << i << "^" << count;
                }
                else {
                    cout << " * " << i;
                }
            }
            ++i;
        }
        cout << endl;
    }
}