#include<stdio.h>
#include<math.h>
int main()
{
    int n,sq,psq;
    scanf("%d",&n);
    sq=sqrt(n);
    psq=sq*sq;
    if(n==psq)      printf("True");
    else            printf("False");
}