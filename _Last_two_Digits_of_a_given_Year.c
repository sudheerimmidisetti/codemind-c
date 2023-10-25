#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&y);
    x=y%100;
    if(x<10)	printf("0%d",x);
    else		printf("%d",x);
}