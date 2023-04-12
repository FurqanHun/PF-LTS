#include <stdio.h>
int main()
{
	int num1, num2;
	
	loo:
	printf("\nEnter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if(num1<0 || num2<0)
	{
		printf("\nInvalid Numbers!\n");
		goto loo;
	}
	
	printf("\n");
	
	if(num1%2 == 0 && num2%2 == 0)
    {
        printf("You have entered two even numbers");
    }
    else if(num1%2 != 0 && num2%2 != 0)
    {
        printf("You have entered two odd numbers");
    }
   else
    {
        printf("You have entered one even number and one odd number.");
    }
    
    return 0;
    //furqan-116
}