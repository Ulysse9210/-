#include<iostream>
#include<string>

using namespace std;
int main (){
    string word;
    cin >> word;
    for (int i = word.size(); i>0; --i){
        cout << word[i-1];
    }
    cout << endl;
    return 0;
}