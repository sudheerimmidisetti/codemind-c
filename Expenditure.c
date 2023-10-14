#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    y*=30;
    if(x>=y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}