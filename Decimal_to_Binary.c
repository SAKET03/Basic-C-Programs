
#include<stdio.h>
int main()
{
    int num, bin[20], j=0, i=0;
    printf("\nEnter any Number= ");
    scanf("%d", &num);

    while(num>0)
    {
        bin[i]= num%2;
        num=num/2;
        i++;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d\n", bin[j]);
    }
    return 0;
}
