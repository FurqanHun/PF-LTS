 // SOLUTION #5
 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int sel, num, oNum, rem, result = 0, sum, a, b, n, rev = 0;
    re:
    system("cls");
    
    printf("\n\t\t\tMAIN MENU:");
    printf("\n\t\t*************************");
    
    printf("\n\t\t[1] Armstrong Number");
    printf("\n\t\t[2] Digit Sum");
    printf("\n\t\t[3] Swap Num");
    printf("\n\t\t[4] Reverse Num");
    
    printf("\n\t\t*************************");
    loo:
    printf("\n\t\tEnter the choice: ");
    scanf("%d", &sel);
    
    if(sel>0 && sel<5)
    {
            system("cls");
            
            }
            
    else
    {
            printf("Invalid Option!");
            goto loo;
            }
            
            
    if (sel == 1)
    {     
            int num, oNum, rem, result = 0;
    
    loo1:
    printf("\nEnter a three digit number: ");
    scanf("%d", &num);
    if(num < 100 || num > 999)
    {
    	printf("\n\tError!\n");
    	goto loo1;
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

            }
            
            
    else if(sel == 2)   
    {
           loo2:
	printf("\nEnter a four digit number: ");
	scanf("%d", &num);
	
	 if(num < 1000 || num > 9999)
    {
    	printf("\n\tError!\n");
    	goto loo2;
	}
	
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	
	if (sum % 2 != 0)
	{
		sum = sum * sum;
		printf("\n%d", sum);
	}
	else
	{
		sum = sum * sum * sum;
		printf("\n%d", sum);
	}
            }
            
            
    else if(sel == 3)
    {
            printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nOld Value of a was %d", b);
	printf("\nOld Value of b was %d\n", a);
	
	//New Values
	
	printf("\nNew Value of a is %d", a);
	printf("\nNew Value of b is %d", b);
            }
            
            
    else if(sel == 4)
    {
            printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) 
  {
    rem = n % 10;
    rev = rev * 10 + rem;
    n /= 10;
  }

  printf("Reversed number is %d", rev);
  printf("J");
            }
            
    printf("\n\n\n\t\t\tThank You for using our service");
    
    //furqan-116
    return 0;
}
    