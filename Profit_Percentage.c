#include<stdio.h>
#include<math.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float p=y-x;
    float pp=(p*100)/x;
    printf("%.2f",pp);
}