#include <stdio.h>

using namespace std;

int main (){
    unsigned int n, m ,d;
    scanf("%d %d %d", &n, &m, &d);
    int i = 0;
    while (true){
        int a = d;
        a -= n*i;
        if (a%m == 0){
            printf("YES");
            break;
        }
        else if (a < 0) {
            printf("NO");
            break;
        }
        ++i;
    }
    return 0;
}