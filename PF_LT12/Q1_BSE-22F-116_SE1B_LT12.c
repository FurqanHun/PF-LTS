#include <stdio.h>

int sum_of_digits(int n);

int main() {
	
  int number;
  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  if (number < 10 || number > 99) {
    printf("\nAYE YO!! That ain't a two digit number like I was told it would be, my nig- guy.\n");
    return 1;
  }


  int sum = sum_of_digits(number);

  printf("\nSum of digits: %d\n", sum);

  return 0;
}

// Function to calculate the sum of the digits of a number
int sum_of_digits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}
