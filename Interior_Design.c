#include<stdio.h>
int main()
{
    int x1,y1,x2,y2;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    int f=x1+x2,s=y1+y2;
    if(f<s)			printf("%d",f);
    else			printf("%d",s);
}