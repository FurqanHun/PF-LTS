#include <stdio.h>

#define ROW 3
#define COL 3

int main() {
  int arr[ROW][COL];
  int i, j, column_sum, column_magic = 1, first_column_sum = 0; // YADE YADE

  printf("Enter the values of the 2D array: \n");
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  // Calculate sum of first column
  for (i = 0; i < ROW; i++) {
    first_column_sum += arr[i][0];
  }

  // Iterate through each column
  for (j = 0; j < COL; j++) {
    column_sum = 0;
    // Calculate sum of current column
    for (i = 0; i < ROW; i++) {
      column_sum += arr[i][j];
    }

    // Check if sum of current column is equal to sum of first column
    if (column_sum != first_column_sum) {
      column_magic = 0;
      break;
    }
  }

  if (column_magic) {
    printf("The given 2D array is column-magic.\n");
  } else {
    printf("The given 2D array is not column-magic.\n");
  }

  return 0;
}
