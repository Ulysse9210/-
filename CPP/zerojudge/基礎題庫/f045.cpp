#include<iostream>

using namespace std;

int main (){
    int id;
    cin >> id;
    int max1{0}, max2{0}, n{0}, id2{id};
    for (int i{0}; i < 9; ++i){
        n = id2 % 10;
        if (n >= max1){
            max2 = max1;
            max1 = n;
        }
        else if (n < max1 && n > max2){
            max2 = n;
        }
        id2 = id2 / 10;
    }
    id2 = max1 * max1 + max2 * max2;
    if (id2 == id % 1000){
        cout << "Good Morning!" << endl;
    }
    else {
        cout << "SPY!" << endl;
    }
    return 0;
}