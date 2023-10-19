#include <stdio.h>
#include <stdlib.h>

int main()
{
  int outer=0,inner=0;

  for(outer=1; outer <= 10; outer++)
  {
      printf("\n---[%d]---\n",outer);
      for(inner=1; inner <= 10; inner++)
      {
          printf("%d * %d = %d\n",outer,inner,outer*inner);
      }
  }
 return 0;
}




/*
Output:


Enter Number
7
Sum =28

*/
