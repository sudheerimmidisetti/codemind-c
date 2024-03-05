#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i-1;j++)		printf(" ");
        for(k=n-i+1;k>=1;k--)	printf("%d ",k);
        printf("
");
    }
}