#include <stdio.h>
int main()
{
 int i,x;

 for(i=5; i>=1; i--)
 {
     for(x=5; x>=i; x--)
     {
         printf("%d",i);
     }
          printf("\n");
 }

return 0;
}



/*
Output:

5
44
333
2222
11111

*/
