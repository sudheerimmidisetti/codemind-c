#include<stdio.h>

int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    int sum=A*1+B*2;
    if(sum>=X)
    {
        printf("Qualify");
    } 
    else 
    {
        printf("Not Qualify");
    }
}