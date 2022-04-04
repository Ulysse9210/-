#include<iostream>
#include<ctype.h>
#include<string>

using namespace std;

int main (){
    string st = "444sdfa";
    if (isdigit(st[1])){
        cout << st[1] << endl;
        int a;
        a = st[1]-'0';
        cout << a << endl;
    }
    if (!isdigit(st[4])){
        cout << "not" << endl;
    }
    return 0;
}