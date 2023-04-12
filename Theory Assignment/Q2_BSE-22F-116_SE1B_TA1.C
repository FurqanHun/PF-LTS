 // SOLUTION #2

#include <stdio.h>
int main()
{
	int num, sum=0;
	
	loo:
	printf("\nEnter a four digit number: ");
	scanf("%d", &num);
	
	 if(num < 1000 || num > 9999)
    {
    	printf("\n\tError!\n");
    	goto loo;
	}
	
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	
	if (sum % 2 != 0)
	{
		sum = sum * sum;
		printf("\nThe sq of the sum is %d", sum);
	}
	else
	{
		sum = sum * sum * sum;
		printf("\nThe cube of the sum is %d", sum);
	}
	
	return 0;
	//furqan-116
}