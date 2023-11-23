#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    	j=n%i;
    	if(j==0)
    	{
        	sum+=i;
    	}
    }
    if(sum>=n)      printf("True");
    else            printf("False");
}