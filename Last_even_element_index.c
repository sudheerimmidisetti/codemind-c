#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>0;i--)
    {
        if(arr[i]%2==0)
        {
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0)     printf("0");
}