#include<stdio.h>
int main()
{
    int n,i,j,c=0,t=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	c=0;
    	for(j=1;j<=i;j++)
    	{
    		if(i%j==0)
    		{
    			c++;
    		}
		}
    	if(c==9)
		{
			printf("%d ",j-1);
			t++;
		}
	}
	printf("
Total=%d",t);
}