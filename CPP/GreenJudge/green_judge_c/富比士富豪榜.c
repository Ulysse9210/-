#include<stdio.h>

int main()
{
    int b,i,j,c;
    scanf("%d",&b);
    int a[b];
    for (i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b-1;i++)
    {
        for(j=0;j<b-1;j++)
        {
            if(a[j]<a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}