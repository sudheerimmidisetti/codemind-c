#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n],max=-1000000;
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int c,flag=0;
    for(int i=0; i<n; i++) {
        c=0;
        for(int j=0; j<n; j++) {
            if(arr[i]==arr[j])  c++;
        }
        if(c==1) {
            if(max<arr[i]) {
                max=arr[i];
                flag=1;
            }
        }
    }
    if(flag==1) printf("%d",max);
    else        printf("-1");
}