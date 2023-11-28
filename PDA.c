#include<stdio.h>
int main()
{
    int i=1,n,f=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
    	{
    		f+=i;
		}
    }
	if(f==n)		printf("PERFECT");
	else if(f<n)	printf("DEFICIENT");
	else			printf("ABUNDANT");
}