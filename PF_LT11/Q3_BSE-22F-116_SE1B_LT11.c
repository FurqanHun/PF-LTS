#include <stdio.h>
#include <ctype.h>

int main() {

  FILE *input_file = fopen("q3_input.txt", "r");
  if (input_file == NULL) {
    printf("Error opening input file!\n");
    return 1;
  }

  FILE *output_file = fopen("q3_output.txt", "w");
  
  // Read the input file one character at a time
  char c;
  while ((c = fgetc(input_file)) != EOF) {
    // Check if the current character is a digit
    if (isdigit(c)) {	 // could have used if() but nahh i'm lazy, using ctype.h is more efficient imo
      // If it is, write a '$' to the output file instead
      fputc('$', output_file);
    } else {
      // none digit means, will write the character as-is to the output file
      fputc(c, output_file);
    }
  }
  
  printf("DONE!!! I'M SMORTOR THEN UH HAHAHAH.");
  fclose(input_file);
  fclose(output_file);

  return 0;
}
