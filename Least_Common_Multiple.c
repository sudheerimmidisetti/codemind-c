#include<stdio.h>
int main()
{
 	int i,a,b,m,n,gcd;
 	scanf("%d%d",&a,&b);
 	for(i=1;i<=b;i++)
 	{
 	    m=i*a;
 	    n=m%b;
 	    if(n==0)
 	    {
 	        printf("%d",m);
 	        break;
 	    }
 	}
}