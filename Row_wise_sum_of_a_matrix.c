#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    	{
    	    scanf("%d",&arr[i][j]);
    	}
    }
    int rsum;
    for(i=0;i<r;i++)
    {
        rsum=0;
        for(j=0;j<c;j++)
    	{
    	    rsum+=arr[i][j];
    	}
    	printf("%d ",rsum);
    }
}