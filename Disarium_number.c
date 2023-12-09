#include<stdio.h>
#include<math.h>
int d_c(int n)
{
    int c=0;
    while(n!=0)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int n,r=0,sum=0,m;
    scanf("%d",&n);
    int dc=d_c(n);
    m=n;
    while(n>0)
    {
        r=n%10;
        sum+=pow(r,dc);
        n/=10;
        dc--;
    }
    if(sum==m)      printf("True");
    else            printf("False");
}