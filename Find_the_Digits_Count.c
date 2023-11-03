#include<stdio.h>
int main()
{
    int i,r=0,n,count=0;
    scanf("%d",&n);
    while(n!=0)
    {
    	r=n%10;
    	n=n/10;
        i++;
        count++;
    }
    printf("%d",count);
}