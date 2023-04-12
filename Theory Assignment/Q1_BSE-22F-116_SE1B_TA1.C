 // SOLUTION #1

#include <stdio.h>
int main()
{
    int num, oNum, rem, result = 0;
    
    loo:
    printf("\nEnter a three digit number: ");
    scanf("%d", &num);
    if(num < 100 || num > 999)
    {
    	printf("\n\tError!\n");
    	goto loo;
	}
    oNum = num;
    
    while (oNum > 0)
	{
        rem = oNum % 10;
        result += rem * rem * rem;
        oNum /= 10;
    }

    if (result == num)
        printf("\n%d is an Armstrong number.", num);
    else
        printf("\n%d is not an Armstrong number.", num);

    return 0;
    //furqan-116
}