#include<stdio.h>
int main()
{
 	int n,r=0,t;
 	scanf("%d",&n);
 	t=n;
 	for(;n!=0;)
 	{
    	r=r*10;
    	r=r+n%10;
    	n/=10;
 	}
 	printf("%d
",r);
}