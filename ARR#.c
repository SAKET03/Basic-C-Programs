#include<stdio.h>

int main()
{
    int a[50], i, check=0,j,temp=0, num, x;

    printf("\nEnter Number of Elements= ");
    scanf("%d", &num);

    num=num-1;

    for(i=0;i<=num;i++)
    {
        printf("\nEnter %d Number=", i+1);
        scanf("%d", &a[i]);
    }
    printf("\nEnter Element to Delete=");
    scanf("%d", &check);

for(j=0;j<=num;j++)
{
    if(check==a[j])
    {
        temp=j;
        break;
    }
}

for(i=temp;i<num;i++)
{
    a[i]=a[i+1];
}

printf("Resultant Array:-\n");

for(i=0;i<num;i++)
{

    printf("%d\n", a[i]);
}

        return 0;
}

