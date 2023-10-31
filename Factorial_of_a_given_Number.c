#include<stdio.h>
int main()
{
    int i,n,a=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a*i;
    }
        printf("%d",a);
}