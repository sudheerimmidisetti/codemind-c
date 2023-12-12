#include<stdio.h>
int main()
{
	int i,n,m,r,np=0,bp=0;
	scanf("%d",&n);
	for(i=n+1;;i++)
	{
		int rev=0,t,r=0;
		t=i;//1
		while(t!=0)
		{
		r=t%10;
		rev=rev*10+r;
		t=t/10;
	    }
	    if(i==rev)
	    {
	    	np=i;
	    	break;
		}
	}
	for(i=n-1;;i--)
	{
		int rev=0,t,r=0;
		t=i;//1
		while(t!=0)
		{
		r=t%10;
		rev=rev*10+r;
		t=t/10;
	    }
	    if(i==rev)
	    {
	    	bp=i;
	    	break;
		}
	}
	if(np-n<n-bp)       printf("%d",np);
	else if(np-n>n-bp)  printf("%d",bp);
	else                printf("%d %d ",bp,np);
}