#include <stdio.h>
#include <stdlib.h>

int main() {
  char *color_name[] = {
    "red",
    "green",
    "blue",
  };

  printf("%zd\n", sizeof(color_name));

  char color_name2[][6] = {
    "red",
    "green",
    "blue",
  };
  printf("%zd\n", sizeof(color_name2));
}