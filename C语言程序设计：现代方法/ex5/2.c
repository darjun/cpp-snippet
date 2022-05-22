#include <stdio.h>

int main() {
  int hour;
  int minute;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: ");
  if (hour >= 12) {
    printf("%02d:%02d PM\n", hour > 12 ? hour - 12 : hour, minute);
  } else {
    printf("%02d:%02d AM\n", hour, minute);
  }
  return 0;
}