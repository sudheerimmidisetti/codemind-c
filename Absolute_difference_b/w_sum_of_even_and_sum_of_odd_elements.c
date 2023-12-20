#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,arr[n],esum=0,osum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            esum+=arr[i];
        }
        else
        {
           osum+=arr[i];
        }
    }
    if(esum>osum)   printf("%d",esum-osum);
    else            printf("%d",osum-esum);
}