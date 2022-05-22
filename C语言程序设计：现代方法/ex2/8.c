#include <stdio.h>

int main() {
  double load;
  double interest;
  double payment;
  printf("Enter amount of load: ");
  scanf("%lf", &load);
  printf("Enter interest rate: ");
  scanf("%lf", &interest);
  printf("Enter monthly payment: ");
  scanf("%lf", &payment);
  char *seq[] = {"first", "second", "third"};
  for (int i = 0; i < 3; i++) {
    load += load * interest / 100 / 12;
    load -= payment;
    printf("Balance remaining after %s payment: $%.2f\n", seq[i], load);
  }
}