#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for (i=0;i<n;i++)
	{
        scanf("%d",&arr[i]);
    }
    int j,k=0,c=0;
    for(i=0;i<n;i++)
	{
        if(arr[i]==1)
		{
            k++;
         	c=(c<k)?k:c;
        }
        else	k=0;
    }
    printf("%d",c);
}