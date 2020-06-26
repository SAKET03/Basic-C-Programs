#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[20];
    int len=0, i, j;

    printf("\n Enter String 1 =  ");
    scanf("%s", s1);
    printf("\n Enter String 2 =  ");
    scanf("%s", s2);

    for(i=0; s1[i]!='\0';i++)
    {
        len++;
    }

    for(j=len, i=0; s2[i]!='\0'; j++, i++)
    {
        s1[j]=s2[i];
    }

    s1[j]='\0';

    printf("\nAfter Concatenate=%s", s1);
    return 0;
}

