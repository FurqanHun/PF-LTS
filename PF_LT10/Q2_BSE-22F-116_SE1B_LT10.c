#include <stdio.h>
#include <stdlib.h>

#define ROWS 2
#define COLS 2

// Function to check if the matrices are compatible for addition
int check_addition_compatibility(int rows_a, int cols_a, int rows_b, int cols_b) {
  return (rows_a == rows_b && cols_a == cols_b);
}

// Function to check if the matrices are compatible for multiplication
int check_multiplication_compatibility(int cols_a, int rows_b) {
  return (cols_a == rows_b);
}

// Function to perform matrix addition
void matrix_addition(int rows, int cols, int matrix_a[][COLS], int matrix_b[][COLS], int result[][COLS]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      result[i][j] = matrix_a[i][j] + matrix_b[i][j];
    }
  }
}

// Function to perform matrix multiplication
void matrix_multiplication(int rows_a, int cols_a, int rows_b, int cols_b, int matrix_a[][COLS], int matrix_b[][COLS], int result[][COLS]) {
  for (int i = 0; i < rows_a; i++) {
    for (int j = 0; j < cols_b; j++) {
      for (int k = 0; k < cols_a; k++) {
        result[i][j] += matrix_a[i][k] * matrix_b[k][j];
      }
    }
  }
}

int main() {
  int matrix_a[ROWS][COLS];
  int matrix_b[ROWS][COLS];
  int result[ROWS][COLS];

  printf("Enter the elements of Matrix A[2][2]: \n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      scanf("%d", &matrix_a[i][j]);
    }
  }

  printf("Enter the elements of Matrix B[2][2]: \n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      scanf("%d", &matrix_b[i][j]);
    }
  }
printf("\n");
  // Check if the matrices are compatible for addition
  if (check_addition_compatibility(ROWS, COLS, ROWS, COLS)) {
    // Perform matrix addition
    matrix_addition(ROWS, COLS, matrix_a, matrix_b, result);

    printf("Addition:\n");
    for (int i = 0; i < ROWS; i++) {
      for (int j = 0; j < COLS; j++) {
        printf("%d ", result[i][j]);
      }
     printf("\n");
}
} else {
printf("Error: The matrices are not compatible for addition.\n");
}

// Check if the matrices are compatible for multiplication
if (check_multiplication_compatibility(COLS, ROWS)) {
  // Perform matrix multiplication
  matrix_multiplication(ROWS, COLS, ROWS, COLS, matrix_a, matrix_b, result);

  printf("Multiplication:\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }
} else {
  printf("Error: The matrices are not compatible for multiplication.\n");
}

return 0;
}