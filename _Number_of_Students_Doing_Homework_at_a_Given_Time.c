#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for (int j=0; j<m; j++) {
        scanf("%d",&b[j]);
    }
    int q, c=0;
    scanf("%d",&q);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (i==j) {
                for (int y=a[i]; y<=b[j]; y++) {
                    if (q==y) c++;
                }
            }
        }
    }
    printf("%d",c);
}