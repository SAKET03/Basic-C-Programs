#include<stdio.h>
#include<conio.h>
int main()
{
    void callbyvalue(int);
    int num;
    printf("\nEnter Any Number=");
    scanf("&d", &num);
    printf("\nYour Number is=%d", num);
    callbyvalue(num);
    printf("\nNumber after calling=%d", num);
    getch();
return 0;
}
void callbyvalue(int num)
{
    printf("\nYour Number=%d", num);
    num=num+10;
    printf("\nYour Number=%d", num);
}
