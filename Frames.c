#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int p=2*(x+y);
    int price=z*p;
    printf("%d",price);
}