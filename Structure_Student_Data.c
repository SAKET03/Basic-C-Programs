#include<stdio.h>
#include<conio.h>

struct student
{
    int roll, age;
    char name[20], batch;
};
int main()
{
    int num;
    struct student s1;
    printf("\n Enter Roll Number");
    scanf("%d", &s1.roll);
    printf("\n Enter Name");
    scanf("%c", &s1.name);
    printf("\n Enter Age");
    scanf("%d", &s1.age);
    printf("\n Enter Batch");
    scanf("%c", &s1.batch);

printf("\nRoll .no=%d",s1.roll);
printf("\nName=%c",s1.name);
printf("\nAge=%d",s1.age);
printf("\nBatch=%c",s1.batch);

getch();
}
