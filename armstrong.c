
#include <stdio.h>
int main()
{
  int n, r = 0, arm, temp=0;

  printf("Enter the Number to Check\n");
  scanf("%d", &n);

 temp=n;

  while (n != 0)
  {
    r = n % 10;
    arm = arm + r* r* r ;
    n = n/10;
  }
 if(temp==n)
 {
     printf("\n Armstrong ");
 }
 else
 {
     printf("\n Not Armstrong");
 }
  return 0;
}

