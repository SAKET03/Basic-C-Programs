#include<stdio.h>
int main()
{
    char s1[20], s2[20];
    int len=0, i;

    printf("\n Enter String to check =  ");
    scanf("%s", s1);

    for(i=0; s1[i]!='\0';i++)
    {
        len++;
    }

    printf("  Length=%d", len);
    return 0;
}
