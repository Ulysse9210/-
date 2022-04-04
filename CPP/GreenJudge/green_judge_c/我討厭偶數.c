#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    while (a%2==0)
    {
        a=a/2;
    }
    printf("%d",a);
    
    return 0;
}