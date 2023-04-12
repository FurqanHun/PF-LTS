#include <stdio.h>

int main() {

  FILE *input_file = fopen("q2_input.txt", "r");
  if (input_file == NULL) {
    printf("Error opening input file!\n");
    return 1;
  }

  FILE *output_file = fopen("q2_output.txt", "w");

  // Read the integer from the input file
  int number;
  fscanf(input_file, "%d", &number);

  // Check if the number is a four-digit integer
  if (number < 1000 || number > 9999) {
    printf("HEY! My memory might be like luffy but that definitely ain't a four-digit integer in input.txt file\n");
    return 1;
  }

  // Calculate the sum of the digits
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }

  fprintf(output_file, "%d\n", sum);
  printf("DONE!!! I'M SMORT BIKH.");

  fclose(input_file);
  fclose(output_file);

  return 0;
}
