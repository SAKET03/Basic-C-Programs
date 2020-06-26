#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20], s2[20];
    int comp;

    printf("\n Enter String 1=");
    scanf("%s", s1);
    printf("\n Enter String 2=");
    scanf("%s", s2);

    comp= strcmp(s1,s2);

    if(comp==0)
    {
        printf("\nStrings are Equal");
    }
    else if(comp>0)
    {
        printf("S1>S2");
    }
    else
    {
        printf("S2>S1");
    }
     return 0;
}
