
#include<stdio.h>
int main()
{
    int *a[50], i, *check=0,j,num, temp=0;

    printf("\nEnter Number of Elements= ");
    scanf("%d", &num);

    num=num-1;

    for(i=0;i<=num;i++)
    {
        printf("\nEnter %d Number=", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter Element to search=");
    scanf("%d", &check);

    for(j=0;j<=4;j++)
    {
    if(check==a[j])
    {
    temp=1;
    break;
    }
    }

    if(temp==1)
    {
    printf("\n Element is Present at=%d", j+1);
    }
    else
    {
    printf("\n Element is not Present");
    }

    return 0;
}
