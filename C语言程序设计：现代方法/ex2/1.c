#include <stdio.h>

int main() {
  for (int y = 0; y <= 5; y++) {
    for (int x = 0; x <= 7; x++) {
      if ((x <= 2 && y == x + 3) || (x > 2 && y == 7 - x)) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}