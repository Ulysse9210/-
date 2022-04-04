#include<stdio.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(m==2||m==5||m==8)
    {
        printf("200");
    }
    else if(h%2!=0)
    {
        printf("100");
    }
    else if(h==m)
    {
        printf("50");
    }
    else
    {
        printf("0");
    }
    
    return 0;
}