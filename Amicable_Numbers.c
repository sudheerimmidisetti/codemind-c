#include<stdio.h>
int main()
{
    int i,j,n,m,a,b,sum1=0,sum2=0;
    scanf("%d%d",&n,&m);
    a=n,b=m;
    for(i=1;i<n;i++)
    {
    	if(n%i==0)
		{
			sum1+=i;
		}
	}
	for(j=1;j<n;j++)
    {
    	if(m%j==0)
		{
			sum2+=j;
		}
	}
	if(a==sum2 && b==sum1)		printf("Amicable");
	else						printf("Not Amicable");
}