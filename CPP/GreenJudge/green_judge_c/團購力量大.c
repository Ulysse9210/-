#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",1000*(n/11)+100*(n%11));
    return 0;
}