#include<stdio.h>
#include<conio.h>

int main()
{
unsigned long amount=1000, deposit, withdraw;
int ch,i;

    printf("\n Select Service from the Following Options");
    printf("\n1: Balance Checking ");
    printf("\n2: Amount Withdrawal");
    printf("\n3: Amount Deposit \n");
    //printf("1: Balance Checking ");
    scanf("%d", &ch);

    do
    {
    switch(ch)
    {
    case 1:
        {
            printf("\nAmount in Your Account is= 1000 ");
        }
        break;
    case 2:
        {
            printf("\nEnter Amount For Withdrawal=\n");
            scanf("%d", &withdraw);
            do
            {
            if(withdraw%100!=0)
            {
               printf("\nPlease enter withdrawal value in Multiples of 100");
            }
            else if(withdraw>500)
            {
                printf("\nInsufficent Amount");
            }
            else
            {
                amount=amount-withdraw;
                printf("\nCollect Withdrawal Amount=%d", withdraw);
            }
            } while(!i);
        }
        break;
    case 3:
        {
            printf("\nEnter Value of Deposit=\n");
            scanf("%lu", &deposit);
            if(deposit>1100000)
            {
                printf("\nExceeded Maximum Deposit Value");
            }
            else
            {
                amount= amount + deposit;
                printf("\nNew Account Balance=%lu", amount);
            }
        }
        break;
    }
	} while (!i);
	printf("\n\n THANKS FOR USING OUT ATM SERVICE");
}


















