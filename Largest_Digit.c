#include<stdio.h>
int main()
{
    int n,a=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(a<r) a=r;
        n/=10;
    }
    printf("%d",a);
}