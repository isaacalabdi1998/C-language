#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count,j,k;

    for(count=1, j=5, k=-1; count <=5; count++, j++, k--)
    {
        printf("\nCounter = %d, j = %d, k = %d", count,j,k);
    }

return 0;
}


/*
Output:

Counter = 1, j = 5, k = -1
Counter = 2, j = 6, k = -2
Counter = 3, j = 7, k = -3
Counter = 4, j = 8, k = -4
Counter = 5, j = 9, k = -5

*/
