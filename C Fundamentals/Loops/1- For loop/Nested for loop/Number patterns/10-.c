#include <stdio.h>
int main()
{
  int i,x;

  for(i=1; i<=5; i++)
  {
      for(x=i; x>=1; x--)
      {
          printf("%d",i);
      }
      printf("\n");
  }

  return 0;
}




/*
Output:

1
22
333
4444
55555
*/
