#include<stdio.h>

int main()
{
    int h,m,c=0;
    scanf("%d %d",&h,&m);
    if(m==2||m==5||m==8)
    {
        c=c+200;
    }
    if(h%2!=0)
    {
        c=c+100;
    }
    if(h==m)
    {
        c=c+50;
    }
    printf("%d",c);
    
    return 0;
} 