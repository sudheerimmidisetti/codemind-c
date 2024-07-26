#include<stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    int count = 0;
    bool between = false;
    for (int i = 0; i < n - 1; ++i) {
        if ((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0)) {
            if (between) {
                count++;
            }
            between=!between;
        } else {
            if (between) {
                count++;
            }
        }
    }
    printf("%d",count);
}