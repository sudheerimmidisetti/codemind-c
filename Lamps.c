#include <stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int a,b,c,d,e,f;
    a=n-k;
    b=k*x;
    c=a*x;
    d=a*y;
    e=b+c;
    f=b+d;
    if(e<f)     printf("%d",e);
    else        printf("%d",f);
}