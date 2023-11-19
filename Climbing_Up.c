#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int stepsleft=x%y;
    if(x%y==0)      printf("%d",x/y); 
    else            printf("%d",(x/y)+stepsleft);
}