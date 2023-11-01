#include<stdio.h>
int main()
{
    float i,n,a=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        a+=1/i;
    }
        printf("%.2f",a);
}