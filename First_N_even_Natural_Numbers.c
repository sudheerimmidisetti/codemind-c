#include<stdio.h>
int main()
{
    int i,n,en=0;
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0)
        {
            en=i;
            printf("%d ",en);
        }
    }
}