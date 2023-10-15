#include<stdio.h>
#include<math.h>
int main()
{
    int P,T,R;
    scanf("%d%d%d",&P,&R,&T);
    float ci=(P*pow((1+(R/100.0)),T))-P;
    printf("%0.2f",ci);
}