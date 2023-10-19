#include <stdio.h>
int main()
{
  int i,x;

  for(i=5; i>=1; i--)
  {
      for(x=5; x>=i; x--)
      {
          printf("%d",x);
      }
      printf("\n");
  }

  return 0;
}



/*
Output:

5
54
543
5432
54321

*/
