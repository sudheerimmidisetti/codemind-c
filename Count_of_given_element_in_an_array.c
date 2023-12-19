#include<stdio.h>
int main()
{
	int n,i,c=0,z;
	scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(arr[i]==z)
        {
            c++;
        }
    }
    if(c>0)    printf("%d",c);
    else        printf("0");
}