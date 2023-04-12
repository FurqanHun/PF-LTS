#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter an Alphabet: ");
	ch = getchar();
	
	if (ch >= 'A' && ch <= 'Z')
        printf("\nThe input alphabet is in capital");
 
    else if (ch >= 'a' && ch <= 'z')
        printf("\nThe input alphabet is in small caps");
 
    else
        printf("\n%c is not an aplhabetic character", ch);
               
    return 0;
    //furqan-116
}