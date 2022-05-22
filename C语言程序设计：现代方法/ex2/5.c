#include <stdio.h>

int main()
{
  int x;
  printf("Enter x: ");
  scanf("%d", &x);
  int v = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
  printf("result: %d\n", v);
  return 0;
}