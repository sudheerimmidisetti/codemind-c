#include<stdio.h>
int main()
{
    float pf,s,HRA,DA,g;
    scanf("%f%f%f",&s,&HRA,&DA);
    pf=s*12/100;
    g=s+HRA+DA+pf;
    printf("%.2f
%.2f",pf,g);
}