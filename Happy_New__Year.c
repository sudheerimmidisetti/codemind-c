#include<stdio.h>
int main()
{
    int h,m;
    scanf("%d%d",&h,&m);
    int t=1440,ctime=(h*60)+m;
    int ltime=t-ctime;
    printf("%d",ltime);
}