#include<stdio.h>

int main()
{
    int i, j, N, columns;
    scanf("%d",&N);
    columns=1;
	if(N>=3 && N<=100)
	{
    	for(i=1;i<N*2;i++)
    	{
        	for(j=1; j<=columns; j++)
        	{
            	printf("*");
        	}
        	if(i < N)
        	{
            	/* Increment number of columns per row for upper part */
            	columns++;
        	}
        	else
        	{
            	/* Decrement number of columns per row for lower part */
            	columns--;
        	}
        	/* Move to next line */
        	printf("
");
    	}
	}
	else	printf("The pattern is not possible");
}