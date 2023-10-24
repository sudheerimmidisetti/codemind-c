#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float l =x-y;
    float lp = (l / x) *100;
    printf("%.2f",lp);
}