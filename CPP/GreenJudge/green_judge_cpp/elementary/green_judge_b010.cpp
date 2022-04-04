#include<iostream>  
  
using namespace std;  
  
int main (){  
    char ch;  
    while (cin >> ch){  
        if (!('A' <= ch && ch <= 'Z')) {  
            break;  
        }  
        ch -= 2;  
        if (ch < 'A'){  
            ch += 26;  
        }  
        cout << (char) ch;  
    }  
    return 0;  
}