#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[20];
    int comp, ch, len;

    printf("\n Enter String 1=");
    scanf("%s", s1);
    printf("\n Enter String 2=");
    scanf("%s", s2);

    printf("\n Enter 1 for String Length for First String");
    printf("\n Enter 2 for String Length for Second String");
    printf("\n Enter 3 for String Concatenate");
    printf("\n Enter 4 for String Copy");
    printf("\n Enter your choice= ");
    scanf("%d", &ch);
    printf("\n");

    switch(ch)
    {
    case 1:
    len=strlen(s1);
    printf("\nLength of First String= %d", len);
    break;

    case 2:
    len=strlen(s1);
    printf("\nLength of First String= %d", len);
    break;

    case 3:
    strcat(s1,s2);
    printf("Result=  ");
    puts(s1);
    break;

    case 4:
    strcpy(s1,s2);
    printf("Result=  ");
    puts(s1);
    }

     return 0;
}
