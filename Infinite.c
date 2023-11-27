#include<stdio.h>
int main()
{
 	int i;
 	while(1)
 	{
 	    int n;
 	    scanf("%d",&n);
 	    if(n==-1)
 	    {
 	        break;
 	    }
 	    else
 	    {
 	        printf("%d
",n*n);
 	    }
 	}
}