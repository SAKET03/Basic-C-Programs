#include<stdio.h>
int main()
{
    int a[50], i, j, temp, n;
    printf("\n Enter range ");
    scanf("%d", &n);

    n=n-1;

    for(i=0;i<=n;i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i; j++)
        {
            if(a[j]a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
            }
        }
    }

    printf("\nAfter Sorting");

    for(i=0;i<n+1;i++)
    {
        printf("\n %d", a[i]);
    }
    return 0;
}
