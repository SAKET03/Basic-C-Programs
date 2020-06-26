
#include <stdio.h>
int main()
{
  int n, r = 0, temp=0;

  printf("Enter a number to reverse\n");
  scanf("%d", &n);

 temp=n;

  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }
 if(temp==n)
 {
     printf("\n Pallindrome");
 }
 else
 {
     printf("\n Not Pallindrome");
 }
  return 0;
}
