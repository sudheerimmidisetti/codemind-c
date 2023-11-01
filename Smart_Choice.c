#include<stdio.h>
int main()
{
    int x,y,a,b,c,d;
    scanf("%d%d%d%d",&x,&y);
    a=500-x*2;
    b=1000-(x+y)*4;
    c=1000-y*4;
    d=500-(x+y)*2;
    a+=b;
    c+=d;
    if(a>=c)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",c);
    }
}