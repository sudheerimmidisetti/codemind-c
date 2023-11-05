#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z;
    scanf("%lf%lf",&x,&y);
    z=sqrt(pow(x,2)+pow(y,2));
    printf("%.2lf",z);
}