#include <stdio.h>

double to_centigrade(double temp);

int main() {
  
  double temp;
  printf("Enter temperature in Fahrenheit: ");
  scanf("%lf", &temp);

  double centigrade = to_centigrade(temp);
  
  int degree=248; //lazy is what you might call me, but i do care about final product :]
  printf("Temperature in Centigrade: %.2f%cC\n", centigrade,degree);

  if (centigrade > 30.0) {
    printf("\nSTILL AIN'T HOTTER THAN YOU ;-)\n");
  }

  return 0;
}

// Function to convert temp from Fahrenheit to Centigrade
double to_centigrade(double temp) {
  return (5.0 * (temp - 32.0)) / 9.0;
}
