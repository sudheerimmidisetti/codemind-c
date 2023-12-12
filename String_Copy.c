#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1000];
    fgets(s1,1000,stdin);
    printf("%s",s1);
}