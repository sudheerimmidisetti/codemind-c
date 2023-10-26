#include<stdio.h>
int main()
{
int i,n,a,b,c;
scanf("%d%d%d",&a,&b,&c);
for(i=b;i<=c;i++)
{
    n=a*i;
    printf("%d x %d = %d
",a,i,n);
}
}