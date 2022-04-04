#include <stdio.h>

using namespace std;

int main (){
    unsigned int a, s, ans;
    scanf("%d %d",&a, &s);
    ans = s/a;
    if (s%a != 0){
        ans += 1;
    }
    printf("%d",ans);
    return 0;
}