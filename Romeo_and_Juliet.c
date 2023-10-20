#include<stdio.h>
int main()
{
    int x,y,z,c;
    scanf("%d%d%d",&x,&y,&z);
    x*=5;
    y*=10;
    c=(x+y)/z;
    printf("%d",c);
}