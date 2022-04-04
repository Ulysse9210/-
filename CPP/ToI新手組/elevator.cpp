#include <stdio.h>

using namespace std;

int main (){
    int n, ans = 0;
    scanf("%d", &n);
    int floor[n];
    for (int i = 0; i < n; ++i){
        scanf("%d ", &floor[i]);
    }
    ans += (floor[0]-1) * 3;
    for (int i = 0; i < n-1; ++i){
        if ((floor[i+1] - floor[i]) > 0){
            ans += 3*(floor[i+1] - floor[i]);
        }
        else if ((floor[i+1] - floor[i]) < 0){
            ans += 2*(floor[i] - floor[i+1]);
        }
    }
    printf("%d", ans);
    return 0;
}