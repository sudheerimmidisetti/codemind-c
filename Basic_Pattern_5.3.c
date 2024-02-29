#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=i;k++)		printf("%d",i);
        for(j=1;j<=n-i;j++)		printf("*");
        printf("
");
    }
}