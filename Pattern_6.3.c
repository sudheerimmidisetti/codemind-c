#include<stdio.h>
int main()
{
    int n,i,j,k,l=0,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=n;
        k=k-l;
        l++;
        for(m=n-i;m>=1;m--)   printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("
");
    }
}