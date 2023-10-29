#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a=n%5;
    b=n/5;
    if(a==0)        printf("%d",b);
    else            printf("%d",b+1);
}