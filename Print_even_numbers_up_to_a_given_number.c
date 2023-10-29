#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i%2;
        if(c==0)  printf("%d ",i);
    }
}