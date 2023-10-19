#include <stdio.h>

int main()
{
  int i,j;

  for(i=5,j=1 ; i>0 && j<6 ; i--,j++)
    printf("%d %d\n",i,j);
    printf("Done\n");




return 0;
}


/*
Output:
5 1
4 2
3 3
2 4
1 5
Done

*/
