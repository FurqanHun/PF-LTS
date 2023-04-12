#include <stdio.h>

int main() {
    char str1[100] = "Denji";
    char str2[100] = ", A name that belongs to a GOAT";
    int i, j;

    // Finds the end of str1
    for (i = 0; str1[i] != '\0'; i++) {
        // do nothing, i put {} here to make it easier for myslef to read this code in fututre -_-
    }

    // Concatenates str2 to str1
    for (j = 0; str2[j] != '\0'; j++) {
        str1[i + j] = str2[j];
    }

    // Adds null character to the end of str1
    str1[i + j] = '\0';

    printf("%s\n", str1); 

    return 0;
}
