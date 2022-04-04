#include<stdio.h>

int main ()
{
    char b;
    int a,c;
    scanf ("%d%c%d",&a,&b,&c);
    if (b=='+')
    {
        a=a+c;
    }
    else if (b=='-')
    {
        a=a-c;
    }
    else
    {
        a=a*c;
    }
    printf ("%d",a);

    return 0;
}