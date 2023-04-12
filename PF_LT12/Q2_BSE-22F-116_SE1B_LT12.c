#include <stdio.h>

double to_percentage(int marks, int total);
int main() {

  int marks;
  printf("Yo CSC103 student...Enter your Quiz marks (out of 15): ");
  scanf("%d", &marks);

  if (marks < 1) {
    printf("\nEEEEEEEE even i can do more than UHHHH HAHAHA\n");
    return 1;
  }
  if (marks > 15) {
    printf("\nAYO!! Take my money and go...live on mars, you're too smort to live on earth.\n");
    return 1;
  }

  // Convert the marks to percentage
  double percentage = to_percentage(marks, 15);

  printf("\nPercentage: %.2f%%\n", percentage);
    if (marks == 15) {
    printf("\nAYO!! Take my money and go...live on mars, you're too smort to live on earth.\n");
    return 1;
  }

  return 0;
}

// Function to convert marks to percentage
double to_percentage(int marks, int total) {
  return (marks / (double)total) * 100;
}
