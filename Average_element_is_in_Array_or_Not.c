#include<stdio.h>
int main()
{
	int n,i;
	float sum=0;
	scanf("%d",&n);
    int arr[n],res;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    res=(sum/n);
    for(i=0;i<n;i++)
    {
        if(res==arr[i])
        {
            printf("True");
            break;
        }
    }
        if(res!=arr[i])
        {
            printf("False");
        }
}
