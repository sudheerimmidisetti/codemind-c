#include <stdio.h>
int main()
{
    int u;
    float uc;
    scanf("%d",&u);
    if(u<=199)                      uc=1.20;
    else if(u>=200 && u<400)        uc=1.40;
    else if(u>=400 && u<600)        uc=1.60;
    else if(u>=600 && u<800)        uc=1.80;
    else                            uc=2.00;
    float tb,b,sc;
    b=uc*u;
    if(b>400)
    {
        sc=b*0.15;
        tb=b+sc;
    }
    else
    {
        tb=b;
    }
    	printf("Units Consumed: %0.2d
",u);
        printf("Cost per Unit: %0.2f
",uc);
        printf("Bill: %0.2f
",b);
        printf("Surcharge: %0.2f
",sc);
        printf("Total Amount: %0.2f
",tb);
}