#include <stdio.h>

#define PI 3.141592653589793

int main()
{
  double r = 10.0;
  double v = 4.0 / 3.0 * PI * r * r * r;
  printf("r=%f, v=%f\n", r, v);
  return 0;
}