#include<stdio.h>
int isPrime(int k) {
    int c=0;
    for(int i=1; i<k; i++) {
        if(k%i==0) c++;
    }
    if(c==1)    return 1;
    else        return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n+1; i; i++) {
        int t=i;
        int rev=0;
        while(t!=0) {
            rev=rev*10+t%10;
            t/=10;
        }
        if(rev==i) {
            if(isPrime(i)) {
                printf("%d",i);
                break;
            }
        }
    }
}