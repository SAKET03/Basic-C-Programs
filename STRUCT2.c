#include <stdio.h>

struct book
{
char name[30];
float price;
char author[30];
}b[10];

int main()

{

int i;
int n;

printf("\nEnter the number of books : ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("-------------------------------\n");
printf("Enter Books Tittle: ");
fflush(stdin);
gets(b[i].name);
printf("\n");
printf("Enter Books Price: ");
scanf("%f", &b[i].price);
printf("\n");
printf("Enter Books Author : ");
fflush(stdin);
scanf("%s", b[i].author);
printf("-------------------------------\n");

}

for(i=0;i<n;i++)
{
printf("-------------------------------\n");
printf("\nEntered details are:\n");
printf("Tittle: %s",b[i].name);
printf("\n");
printf("Price: %f",b[i].price);
printf("\n");
printf("Author: %s",b[i].author);
printf("\n");
printf("-------------------------------\n");
}

return 0;

}
