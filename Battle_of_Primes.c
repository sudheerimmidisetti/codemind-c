#include<stdio.h>
int main()
{
    int i,n1,n2,n,c,j;
    scanf("%d%d",&n1,&n2);
    n=n1+n2;
    for(i=n+1;;i++)
    {
    	c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
			{
				c++;
			}
        }
        if(c==2)
        {
            printf("%d ",i-n);
            break;
        }
	}
}