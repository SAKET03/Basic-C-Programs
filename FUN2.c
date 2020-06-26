#include<stdio.h>
#include<conio.h>
float avg(int age[]);
int main()
{
   int age[10],i;
   float c;

   printf("\n Enter age of 10 students\n");

   for(i=0;i<=10;i++)
   {
        scanf("\n%d", &age[i]);
   }
c=avg(age);
printf("Average of Ages=%f", c);
}

float avg(int age[])
{
float sum=0, process;
int i;
for(i=0;i<=10;i++)
{
    sum= sum + age[i];
}

process= sum/10;
return process;
}


