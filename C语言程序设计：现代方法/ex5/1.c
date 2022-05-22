#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int digits = 0;
  int m = n;
  while (m > 0) {
    digits++;
    m /= 10;
  }
  printf("The number %d has %d digits.\n", n, digits);
  return 0;
}