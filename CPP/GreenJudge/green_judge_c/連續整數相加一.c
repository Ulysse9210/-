#include<stdio.h>

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    for (i=0;a<b;a++)
    {
        printf("%d+",a);
        i=i+a;
    }
    i=i+a;
    printf("%d=%d",a,i);
    return 0;
}