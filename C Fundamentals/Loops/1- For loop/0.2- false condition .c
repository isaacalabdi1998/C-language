#include <stdio.h>

int main()
{
  for (; 0; );  // The loop has an empty body, and the condition is always false.
  printf("Hello\n"); // This line is outside the loop.
  printf("Done\n");

  return 0;
}


/*

Outputs
=> Hello
=> Done

*/