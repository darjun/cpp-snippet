#include <stdio.h>

int main()
{
  int array[5];
  int *p;
  int i;

  for (i = 0; i < 5; i++) {
    array[i] = i;
  }

  for (p = &array[0]; p != &array[5]; p++) {
    printf("%d\n", *p);
  }

  p = &array[0];
  for (i = 0; i < 5; i++) {
    printf("%d\n", *(p + i));
  }

  return 0;
}