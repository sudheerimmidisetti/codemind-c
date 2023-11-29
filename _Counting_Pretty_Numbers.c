#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int a,b,j,p=0,pn;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            pn=j%10;
    	    if(pn==2 || pn==3 || pn==9)
    	    {
    		    p++;
		    }
        }
	    printf("%d
",p);
    }
}