#include <stdio.h>

int main(void) {
    char s[100] = "Ore wa Monkey D. Luffy, Kaizoku ou ni ore wa naru!";
    char d[100];
    int i;

    // Copy s into d
    for (i = 0; s[i] != '\0'; i++) {
        d[i] = s[i];
    }

    // Add null character to the end of d
    d[i] = '\0';

    printf("%s\n", d);  // prints "Hello, world!"

    return 0;
}
