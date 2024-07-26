#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],a[2];
    a[0]=-1;
    a[1]=-1;
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    for(int i=0; i<n; i++) {
        if(arr[i]==target) {
            a[0]=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--) {
        if(arr[i]==target) {
            a[1]=i;
            break;
        }
    }
    printf("%d %d",a[0],a[1]);
}