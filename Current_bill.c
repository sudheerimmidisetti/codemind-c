#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float b,tb,uc;
    if(u<200)
    {
        uc=1.20;
    }
    else if(u>200 && u<400)
    {
        uc=1.50;
    }
    else if(u>400 && u<600)
    {
        uc=1.80;
    }
    else if(u>600)
    {
        uc=2.00;
    }
    
    b=u*uc;
    if(b>400)
    {
        tb=b+(b*0.15);
    }
    else if(b<400)
    {
        tb=b+100.0;
    }
    printf("%.2f",tb);
}