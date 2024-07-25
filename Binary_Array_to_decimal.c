#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int decimal=0;
    int size=n-1;
    for(int i=0; i<n; i++) {
        decimal+=pow(2,size--)*arr[i];
    }
    printf("%d",decimal);
}