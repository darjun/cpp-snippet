#include <stdio.h>

int main(void) {
  int n;
  int row_sums[4] = {0, 0, 0, 0};
  int column_sums[4] = {0, 0, 0, 0};
  int diagonal_sums[2] = {0 , 0};
  printf("Enter the numbers from 1 to 16 in any order: ");
  for (int i = 0; i < 16; i++) {
    if (i != 0 && i % 4 == 0) {
      printf("\n");
    }
    scanf("%d", &n);
    printf("%2d  ", n);
    int row = i / 4;
    int col = i % 4;
    row_sums[row] += n;
    column_sums[col] += n;
    if (row == col) {
      diagonal_sums[0] += n;
    } else if (row + col == 3) {
      diagonal_sums[1] += n;
    }
  }
  printf("\n");

  printf("Row sums: ");
  for (int i = 0; i < 4; i++) {
    printf("%2d", row_sums[i]);
    if (i == 3) {
      printf("\n");
    } else {
      printf(" ");
    }
  }
  printf("Column sums: ");
  for (int i = 0; i < 4; i++) {
    printf("%2d", column_sums[i]);
    if (i == 3) {
      printf("\n");
    } else {
      printf(" ");
    }
  }
  printf("Diagonal sums: ");
  for (int i = 0; i < 2; i++) {
    printf("%2d", diagonal_sums[i]);
    if (i == 1) {
      printf("\n");
    } else {
      printf(" ");
    }
  }
}