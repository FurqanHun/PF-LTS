#include <stdio.h>

int main() {
    char str1[100], str2[100];

   // Taking inputs 
	printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

	// loop will cotinue to run until it reachs the null character or eoc
    int i;
    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            printf("The strings are not equal.\n");
            return 0;
        }
    }

    printf("\nThe strings are equal.\n");

    return 0;
}
