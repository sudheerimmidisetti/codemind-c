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
    int csum;
    for(j=0;j<c;j++)
    {
        csum=0;
        for(i=0;i<r;i++)
    	{
    	    csum+=arr[i][j];
    	}
    	printf("%d ",csum);
    }
}