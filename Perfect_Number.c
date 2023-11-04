#include<stdio.h>
int main()
{
    int i=1,n,f=0;
    scanf("%d",&n);
    while(i<n)
    {
    	if(n%i==0)
    	{
        	f+=i;
		}
    	i++;
    }
	if(f==n)		printf("True");
	else			printf("False");
}