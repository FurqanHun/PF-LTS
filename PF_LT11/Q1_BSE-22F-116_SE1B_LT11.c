#include <stdio.h>

int main()
{
  char filename[100];
  printf("Enter the name of the file: ");
  scanf("%s", filename);

  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  // Initialize a counter for the number of vowels
  int vowel_count = 0;

  // Reads the file one character at a time
  char c;
  while ((c = fgetc(file)) != EOF) {
    // Checks if the current character is a vowel
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      vowel_count++;
    }
  }

  fclose(file);

  printf("Number of vowels: %d\n", vowel_count);

  return 0;
}
