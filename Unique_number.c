#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[10]={0};
    while(n>0) {
        int r=n%10;
        a[r]++;
        n/=10;
    }
    int c=0;
    for(int i=0; i<10; i++) {
        if(a[i]>1)  c++;
    }
    if(c>0)     printf("Not Unique Number");
    else        printf("Unique Number");
}