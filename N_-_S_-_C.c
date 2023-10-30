#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,x,y;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        x=i*i;
        y=i*i*i;
        printf("%d %d %d
",i,x,y);
    }
}