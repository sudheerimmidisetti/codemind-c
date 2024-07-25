#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],flag=0;
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i]>1) {
            flag=1;
        }
    }
    if(flag==1) printf("False");
    else        printf("True");
}