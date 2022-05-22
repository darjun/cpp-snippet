#include <stdio.h>

int main() {
  int number;
  double price;
  int m, d, y;
  printf("Enter item number: ");
  scanf("%d", &number);
  printf("Enter unit price: ");
  scanf("%lf", &price);
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);
  printf("Item\tUnit\tPurchase\n");
  printf("\tPrice\tDate\n");
  printf("%-d\t$%6.2f\t%2d/%2d/%4d\n", number, price, m, d, y);
  return 0;
}