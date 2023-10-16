#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int dis=x*5;
    if(dis>=y)			printf("YES");
    else				printf("NO");
}