#include<stdio.h>
int main()
{
    int mat1[3][3], mat2[3][3], i, j, add[3][3];

    printf("\n Enter Matrix 1\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d" , &mat1[i][j]);
        }
    }

    printf("\n Enter Matrix 2\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d" , &mat2[i][j]);
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          add[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

        printf("\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
    return 0;
}

