#include<stdio.h>
int main()
{
    int a,r,t=0,v=0;
 	scanf("%d",&a);
	while(a!=0)
    {
    	r=a%10;
    	if(r%2==0)
    	{
    	    t++;
    	}
    	else
    	{
    	    v++;
    	}
    	a/=10;
    }
    if(t==0 && v!=0)         printf("Odd");
    else if(v==0 && t!=0)    printf("Even");
    else                     printf("Mixed");
}