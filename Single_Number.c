#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int num=0,c=0;
    for(int i=0; i<n; i++) {
        c=0;
        for(int j=0; j<n; j++) {
            if(arr[i]==arr[j]) {
                c++;
            }
        }
        if(c==1) {
            num=arr[i];
        }
    }
    printf("%d",num);
}