#include <stdio.h>

#define TAX_RATE 5.0

int main()
{
  double amount;
  printf("Enter an amount: ");
  scanf("%lf", &amount);
  printf("With tax added: $%.2f\n", amount * (1.0 + TAX_RATE / 100.0));
  return 0;
}