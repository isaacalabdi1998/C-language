#include <stdio.h>
int main()
{
  int i,x;

  for(i=1; i<=5; i++)
  {
      for(x=i; x>=1; x--)
      {
          printf("%d",x);
      }
      printf("\n");
  }

  return 0;
}




/*
Output:

1
21
321
4321
54321
*/
