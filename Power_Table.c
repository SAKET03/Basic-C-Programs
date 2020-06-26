#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float temp;
    for(i=-10;i<=10;i++)
    {
        temp= pow(2,i);
        printf("\n %f", temp);
    }
    return 0;
}
