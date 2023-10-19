#include <stdio.h>

/* counter from N to 1*/
/*if Entered Number is 5; The sum = 1+2+3+4+5=15 */

int main()
{
  int i,n,sum1=0,sum2=0;

  printf("Enter Number\n");
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
   sum1+=i;
  }

  sum2 =(n * (n+1)) / 2; /* This code do as for loop*/

  printf("Sum1 =%d\n",sum1);
  printf("Sum2 =%d\n",sum2);

  return 0;

}




/*
Output:

Enter Number
7
Sum1 =28
Sum2 =28

*/
