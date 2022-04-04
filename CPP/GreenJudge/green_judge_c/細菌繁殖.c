#include<stdio.h>

int main()
{
    int n,m,c=0;
    scanf("%d %d",&n,&m);
    while (n<m)
    {
        n=n*3;
        c++;
    }
    printf("%d",c);
    
    return 0;
}