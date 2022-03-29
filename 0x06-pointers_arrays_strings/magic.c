#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
//  *(p + 5) = 98;
  *(p + 4) = 99;
  *(p + 3) = 100;
  *(p + 2) = 101;
  *(p + 1) = 102;
  *p = 103;
  /* ...so that this prints 98\n */
  printf("%d\n%d\n%d\n%d\n", *p, *a, a[1], a[2]);
  return (0);
}
