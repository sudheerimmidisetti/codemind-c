#include<stdio.h>
int main()
{
    int n,sq,r=0,rsq,rn=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        r=r*10+n%10;
    	 n/=10;
    }
	rsq=r*r;
	while(rsq!=0)
    {
        rn=rn*10+rsq%10;
    	 rsq/=10;
    }
	if(rn==sq)      printf("True");
	else            printf("False");
}