#include<stdio.h>
int main()
{
	int n,i,sum=0;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int a=sum/n,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a) c++;
    }
    printf("%d",c);
}