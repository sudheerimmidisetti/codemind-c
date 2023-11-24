#include<stdio.h>
int main()
{
 	int i,n,t,r=0,s;
 	scanf("%d",&n);
 	s=n*n;
 	while(s!=0)
 	{
    	r=r+s%10;
    	s=s/10;
    	i++;
 	}
 	if(n==r)		printf("Neon Number");
 	else			printf("Not Neon Number");
}