#include<stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",&str);
        int c,flag=0;
        char k;
        for(int i=0; i<n; i++) {
            c=0;
            for(int j=0; j<n; j++) {
                if(str[i]==str[j]) {
                    c++;
                }
            }
            if(c==1) {
                flag=1;
                k=str[i];
                break;
            }
        }
        if(flag==1)     printf("%c
",k);
        else            printf("-1
");
    }
}