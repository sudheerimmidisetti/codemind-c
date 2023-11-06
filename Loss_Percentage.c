#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float l=x-y;
    float lp=(l*100)/x;
    printf("%.2f",lp);
}