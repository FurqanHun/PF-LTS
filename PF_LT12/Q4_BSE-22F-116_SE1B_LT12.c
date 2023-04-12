#include <stdio.h>

double calculate_vol(double curr, double resis);

int main() {

  double curr, resis;
  printf("Enter current (in amperes): ");
  scanf("%lf", &curr);
  printf("Enter resistance (in ohms): ");
  scanf("%lf", &resis);

  double vol = calculate_vol(curr, resis);

  printf("\nVoltage: %.2f volts\n", vol);

  return 0;
}

// Function to calculate vol
double calculate_vol(double curr, double resis) {
  return curr * resis;
}
