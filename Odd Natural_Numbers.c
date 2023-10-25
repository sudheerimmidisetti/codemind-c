#include<stdio.h>
int main()
{
    int i,n,os=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	if(i%2==1)
    	{
    		os=i;
    		printf("%d ",os);
		}
    }
}