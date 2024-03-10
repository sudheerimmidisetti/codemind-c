#include <stdio.h>
int main() {
    char s[100];
    char max;
    int i;
    scanf("%[^
]s",s);
    max=s[0];
    for (i=1;s[i]!=NULL;i++)
	{
        if (s[i]>max)
		{
            max=s[i];
        }
    }
    printf("%c",max);
}