#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,c,sum1=0,sum2=0,sq;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=i*i;
		sum1+=b;
    }
	for(i=1;i<=a;i++)
	{
		sum2+=i;
		sq=sum2*sum2;
	}
	c=sq-sum1;
	printf("%d",c);
}