#include<stdio.h>
int main()
{
    int n,k,m,a,b,c;
    scanf("%d%d%d",&n,&k,&m);
    a=m*k;
    b=n/a;
    c=n%a;
    if(c==0)        printf("%d",b);
    else            printf("%d",b+1);
}