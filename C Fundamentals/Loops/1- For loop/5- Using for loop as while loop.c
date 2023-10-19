#include <stdio.h>

int main(void) 
{
  int x=0;

  for( ; x<10 ; )
  {
    printf("%d-Hello\n",x+1);
    x++;
  }
  
  return 0;
}



/*
Output:

1-Hello
2-Hello
3-Hello
4-Hello
5-Hello
6-Hello
7-Hello
8-Hello
9-Hello
10-Hello

*/
