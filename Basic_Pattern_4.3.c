#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j%2==1)
            {
            	printf("1 ",j);
			}
			if(j%2==0)
            {
            	printf("0 ",j);
			}
        }
        printf("
");
    }
}