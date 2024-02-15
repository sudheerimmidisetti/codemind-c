#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=0,max=0;
    for (i=0;i<n;i++)
	{
        int c = 0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(arr[i]==c)
        {
            if(min==0||arr[i]<min)
            {
                min=arr[i];
            }
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    if(min==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",min,max);
    }
}