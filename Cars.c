#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n/4;
    if(n%4==0)        printf("%d",a);
	else            printf("%d",a+1);
}