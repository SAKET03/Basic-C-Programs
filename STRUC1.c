#include <stdio.h>

struct employee
{
char name[30];
int empId;
float salary;
char dep[30];
}emp[10];

float Max(struct employee e[],int n);
float Min(struct employee e[],int n);

int main()
{
int n, i;
float max, min;

printf("\n Enter the No. of Employee: ");
scanf("%d", &n);

for(i=1;i<=n;i++)

{

printf("-------------------------------\n");

printf("Enter Employee Name: ");

fflush(stdin);

gets(emp[i].name);

printf("\n");

printf("Enter Employee ID: ");

scanf("%d",&emp[i].empId);

printf("\n");

printf("Enter Employee Salary: ");

scanf("%f",&emp[i].salary);

printf("\n");

printf("Enter Employee Department : ");

fflush(stdin);

gets(emp[i].dep);

printf("-------------------------------\n");

}

for(i=1;i<=n;i++)

{

printf("-------------------------------\n");

printf("\nEntered details are:\n");

printf("Name: %s" ,emp[i].name);

printf("\n");

printf("Id: %d" ,emp[i].empId);

printf("\n");

printf("Salary: %f",emp[i].salary);

printf("\n");

printf("Department: %s" ,emp[i].dep);

printf("\n");

printf("-------------------------------\n");

}

max= Max(emp,n);
printf("Highest Salary= %f", max);

min= Min(emp,n);
printf("Lowest Salary= %f", min);
return 0;

}

float Max(struct employee e[],int n)
{

float max, min;
int i;

max = e[0].salary;

for(i=0; i<n; i++)
{
if(e[i].salary > max)
{
max = e[i].salary;

}

}

return max;

}

float Min(struct employee e[],int n)
{
float max, min;
int i;

min = e[0].salary;

for(i=0; i<n; i++)
{
if(e[i].salary < min)
{
min = e[i].salary;
}
}
return min;

}
