 // SOLUTION #3

#include <stdio.h>
int main()
{
	int a, b; // declaration of 2 variables i.e a , b
	
	//taking input and sending the values to the variables
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	//printing result 
	printf("\nOld Value of a was %d", b);
	printf("\nOld Value of b was %d\n", a);
	
	//New Values
	
	printf("\nNew Value of a is %d", a);
	printf("\nNew Value of b is %d", b);
	
	return 0;	
	//furqan-116
}