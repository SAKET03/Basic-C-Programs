#include<stdio.h>
int main()
{
    int a[5], i, check=0,j,temp=0;
    for(i=0;i<=4;i++)
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

