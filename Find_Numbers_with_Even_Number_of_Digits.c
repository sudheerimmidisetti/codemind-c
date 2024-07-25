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
		int k=arr[i];
		int m=0;
		while(k>0) {
		    m++;
		    k/=10;
		}
		if(m%2==0)  c++;
	}
    printf("%d ",c);
}