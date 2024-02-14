#include <stdio.h>
int main()
{
    char s[100],vowel;
    int i,index=-1;
    scanf("%[^
]s",s);
    scanf(" %c",&vowel);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==vowel)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    {
        printf("True
");
        printf("%d
",index);
    }
    else
    {
        printf("False
");
    }
}