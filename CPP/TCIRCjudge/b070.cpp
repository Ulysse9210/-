#include <iostream>
#include <string>

using namespace std;

int main (){
    string num;
    cin >> num;
    for (int i = 0; i < num.size(); ++i){
        if (num[i] != num[num.size() - 1 - i]){
            cout << "NO" << endl;
            break;
        }
        else if (i == num.size() - 1){
            cout << "YES" << endl;
        }
    }
    return 0;
}