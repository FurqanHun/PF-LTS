#include <stdio.h>
#include <math.h>

// Declare function prototype
void quadraticRoots(double a, double b, double c, double *root1, double *root2, int *imag);

int main() {
  // Declare variables
  double a, b, c, root1, root2;
  int imag;

  // Read in coefficients
  printf("Enter coefficients a, b and c: ");
  scanf("%lf%lf%lf", &a, &b, &c);

  // Calculate roots
  quadraticRoots(a, b, c, &root1, &root2, &imag);

  // Print roots
  if (!imag) {
    // Roots are real
    printf("Root 1: %.2lf\n", root1);
    printf("Root 2: %.2lf\n", root2);
  }
  else {
    // Roots are complex
    printf("Root 1: %.2lf + %.2lfi\n", root1, root2);
    printf("Root 2: %.2lf - %.2lfi\n", root1, root2);
  }

  return 0;
}

// Function to calculate roots of a quadratic equation
void quadraticRoots(double a, double b, double c, double *root1, double *root2, int *imag) {
  // Check if roots are real or complex
  if (b*b > 4*a*c) {
    // Roots are real
    *root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
    *root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
    *imag = 0;
  }
  else {
    // Roots are complex
    *root1 = -b / (2*a);
    *root2 = sqrt(4*a*c - b*b) / (2*a);
    *imag = 1;
  }
}
