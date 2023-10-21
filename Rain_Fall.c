#include<stdio.h>

int main()
{
    int mm;
    scanf("%d",&mm);
    if(mm<3)
    {
        	printf("LIGHT");
   	}
    else if(mm>=3 && mm<7)
    {
        printf("MODERATE");
    }
    else
    {
        printf("HEAVY");
    }
}