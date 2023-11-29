#include<stdio.h>
int main()
{
 	int i,j,n,t,r=0,m=1,s;
 	scanf("%d",&n);
 	while(n!=0)
	{
    	r+=n%10;
    	m*=n%10;
    	n=n/10;
    	i++;
 	}
 	if(m==r)		printf("Spy Number");
 	else			printf("Not Spy Number");
}