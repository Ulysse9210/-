#include<stdio.h>

int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    for (int i=1,m=n;i<=r-1;i++)
    {
        n=n*(m-i);
    }
    printf("%d",n);
    return 0;
}