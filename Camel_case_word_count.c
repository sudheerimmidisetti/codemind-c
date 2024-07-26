#include<stdio.h>
#include<ctype.h>
int main() {
    char str[100000];
    scanf("%s",&str);
    int count=0;
    if (islower(str[0])) {
        count=1;
    }
    for (int i=0; str[i]!=NULL; i++) {
        if (isupper(str[i])) {
            count++;
        }
    }
    printf("%d",count);
}