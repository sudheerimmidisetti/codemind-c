#include<stdio.h>
int main()
{
	int i,a,b;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
    {
        int t=i,r=0;
        while(t!=0)
        {
        	r=r*10+t%10;
        	t/=10;
		}
		if(i==r)	printf("%d ",r);
    }
}