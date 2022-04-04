#include<iostream>
#include<string>
#include<cmath>

using namespace std;

const int I{1}, V{5}, X{10}, L{50}, C{100}, D{500}, M{1000};
const int IV{4}, IX{9}, XL{40}, XC{90}, CD{400}, CM{900};
int main (){
    string a, b;
    while (cin >> a){
        if (a == "#"){
            break;
        }
        cin >> b;
        int numA[a.size()], numB[b.size()];
        for (int i{0}; i < a.size(); ++i){ //檢查Ａ
            int k{0};
            switch (a[i]){
                case 'I':
                    k = I;
                    break;
                case 'V':
                    k = V;
                    break;
                case 'X':
                    k = X;
                    break;
                case 'L':
                    k = L;
                    break;
                case 'C':
                    k = C;
                    break;
                case 'D':
                    k = D;
                    break;
                case 'M':
                    k = M;
                    break;
            }
            numA[i] = k;
        }
        for (int i{0}; i < b.size(); ++i){ //檢查Ｂ
            int k{0};
            switch (a[i]){
                case 'I':
                    k = I;
                    break;
                case 'V':
                    k = V;
                    break;
                case 'X':
                    k = X;
                    break;
                case 'L':
                    k = L;
                    break;
                case 'C':
                    k = C;
                    break;
                case 'D':
                    k = D;
                    break;
                case 'M':
                    k = M;
                    break;
            }
            numB[i] = k;
        }
        int sumA{0}, sumB{0};
        for (int i{0}; i < a.size(); ++i){ //計算Ａ的值
            if (i == a.size()-1){
                sumA += numA[i];
            }
            else if (numA[i] >= numA[i+1]){
                sumA += numA[i];
            }
            else if (numA[i] < numA[i+1]){
                sumA -= numA[i];
            }
        }
        for (int i{0}; i < b.size(); ++i){ //計算Ｂ的值
            if (i == b.size()-1){
                sumB += numB[i];
            }
            else if (numB[i] >= numB[i+1]){
                sumB += numB[i];
            }
            else if (numB[i] < numB[i+1]){
                sumB -= numB[i];
            }
        }
        int sum{sumA-sumB};
        if (sum < 0){
            sum *= (-1);
        }
        if (sum == 0){
            cout << "ZERO";
        }
        while (sum/M != 0){ //輸出千位
            cout << "M";
            sum -= M;
        }
        sum %= M;
        while (sum/C != 0){ //輸出百位
            if (sum >= CM){
                cout << "CM";
                sum -= CM;
            }
            else if (sum >= D){
                cout << "D";
                sum -= D;
            }
            else if (sum >= CD){
                cout << "CD";
                sum -= CD;
            }
            else {
                cout << "C";
                sum -= C;
            }
        }
        sum %= C;
        while (sum/X != 0){ //輸出十位
            if (sum >= XC){
                cout << "XC";
                sum -= XC;
            }
            else if (sum >= L){
                cout << "L";
                sum -= L;
            }
            else if (sum >= XL){
                cout << "XL";
                sum -= XL;
            }
            else{
                cout << "X";
                sum -= X;
            }
        }
        sum %= X;
        while (sum/I != 0){ //輸出個位
            if (sum >= IX){
                cout << IX;
                sum -= IX;
            }
            else if (sum >= V){
                cout << "V";
                sum -= V;
            }
            else if (sum >= IV){
                cout << "IV";
                sum -= IV;
            }
            else {
                cout << "I";
                sum -= I;
            }
        }
        cout << endl;
        a.clear();
        b.clear();
    }
    return 0;
}