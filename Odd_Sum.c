#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0)
        {
            sum+=arr[i];
        }
    }
    printf("%d",sum);
}