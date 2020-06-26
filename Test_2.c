#include<stdio.h>
#include<conio.h>
void callbyref(int*);
int main()
{
    int num;
    printf("\nEnter Any Number=");
    scanf("%d", &num);
    printf("\nYour Number is=%d", num);
    callbyref(&num);
    printf("\nNumber after calling=%d", num);
    getch();
return 0;
}
void callbyref(int *num)
{
    printf("\nYour Number=%d", *num);
    *num=*num+10;
    printf("\nYour Num=%d", *num);
}
