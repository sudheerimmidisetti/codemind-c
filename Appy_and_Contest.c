#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int j,n,a,b,k,c=0,d=0,e=0,m;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(j=1;j<=n;j++)
        {
            if(j%a==0 && j%b==0)    e++;
            else if(j%a==0)         c++;
            else if(j%b==0)         d++;
        }
        m=c+d;
        if(m>=k)	printf("Win
");
        else		printf("Lose
");
    }
}