#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char sl[20]={'A', 'B', 'C', 'D', '\0'};
    len=strlen(sl);
    printf("%d", len);
}
