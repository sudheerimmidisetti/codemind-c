#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    long long int c=0;
    for(int i=0;i<n;i++) {
        c=0;
		for(int j=0; j<n; j++) {
		    if(i!=j) {
		        if(arr[i]>arr[j])   c++;
		    }
		}
        printf("%d ",c);
    }
}