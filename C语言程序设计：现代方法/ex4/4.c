#include <stdio.h>

int main(void) {
  int n;
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &n);
  printf("In octal, your number is: 0%o\n", n);
  return 0;
}