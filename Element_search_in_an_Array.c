#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(se==arr[i])
        {
            c++;
            break;
        }
    }
    if(c==1)		printf("True");
    else			printf("False");
}