#include<stdio.h>

int main()
{
    int n,c=1;
    scanf("%d",&n);
    while (n!=1)
    {
        if (n%2==0)
        {
            n=n/2;
        }
        else
        {
            n=3*n+1;
        }
        c++;
    }
    printf("%d",c);
    
    return 0;
}