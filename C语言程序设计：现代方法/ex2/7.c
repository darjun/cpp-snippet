#include <stdio.h>

int main()
{
  int dollars[] = {20, 10, 5, 1};
  int amount;
  printf("Enter amount: ");
  scanf("%d", &amount);
  for (int i = 0; i < sizeof(dollars) / sizeof(dollars[0]); i++) {
    int c = amount / dollars[i];
    if (dollars[i] < 10) {
      printf(" ");
    }
    printf("$%d bills: %d\n", dollars[i], c);
    amount -= c * dollars[i];
  }
  return 0;
}