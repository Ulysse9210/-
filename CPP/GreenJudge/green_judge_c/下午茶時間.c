#include<stdio.h>

int main()
{
    int h,m;
    scanf("%d %d",&h,&m);
    if(h==14&&m>=20)
    {
        printf("YES");
    }
    else if(h==15)
    {
        printf("YES");
    }
    else if(h==16&&m<=40)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}