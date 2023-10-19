#include <stdio.h>
int main()
{
  int i,j,n;

  printf("Enter Number\n");
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
    for(j=1; j<=n; j++)
    {
      if(j==1 || j==n || i==1 ||i==n)
        printf("1");
      else
        printf(" ");
    }
    printf("\n");

  }

return 0;
}




/*
Output:

Enter Number
7
1111111
1     1
1     1
1     1
1     1
1     1
1111111
*/
