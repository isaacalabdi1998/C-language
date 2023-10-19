#include <stdio.h>
#include <stdlib.h>

int main()
{
    //C Code to print Average of Students
 int i,n;
 float degree=0,sum=0;

 printf("Enter Number of Students\n");
 scanf("%d",&n);

 for(i=1; i <= n ; i++)
 {
    printf("Enter Student [%d] Degree : ",i);
    scanf("%f",&degree);
    sum+=degree;
 }

 sum/=n;
 printf("\nAverage Students Degree = %.2f\n",sum);

 return 0;
}



/*
Output:

Enter Number of Students
7
Enter Student [1] Degree : 60
Enter Student [2] Degree : 16
Enter Student [3] Degree : 80
Enter Student [4] Degree : 94
Enter Student [5] Degree : 36
Enter Student [6] Degree : 79
Enter Student [7] Degree : 59

Average Students Degree = 60.57

*/
