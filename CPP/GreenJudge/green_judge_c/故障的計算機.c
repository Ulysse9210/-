#include<stdio.h>

int main ()
{
    int a;
    scanf ("%d",&a);
    a=a%10000;
    if (a>=1000)
    printf ("|____%*d|", 4, a) ;
    return 0;
}