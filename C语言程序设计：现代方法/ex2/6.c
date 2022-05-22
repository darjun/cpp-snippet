#include <stdio.h>

int main()
{
  int x;
  printf("Enter x: ");
  scanf("%d", &x);
  int v = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
  printf("result: %d\n", v);
  return 0;
}