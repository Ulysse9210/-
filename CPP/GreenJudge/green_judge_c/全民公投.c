#include<stdio.h>

int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a>b)
    {
        printf("A ");
    }
    else
    {
        printf("B ");
    }
    printf("%lld",a+b);
    
    return 0;
}