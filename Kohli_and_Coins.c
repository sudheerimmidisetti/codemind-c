#include <stdio.h>
int main()
{
    int n,x;
    scanf("%d",&x);
    n=x/10;
    if(x%10!=0 && x%10!=5)  	    printf("-1");
    else if(x%10==5)   				printf("%d",n+1);
    else			   				printf("%d",n);
}