#include <stdio.h>
#include<stdlib.h>
int main()
{
	double a, b, c;
	char opera;
	
	printf("Enter an operator (+, -, *, /): ");
	scanf("%c", &opera);
	
	printf("\nEnter two numbers: ");
	scanf("%lf %lf", &a, &b);
	
	
	 if (opera == '+')
    {     
            c=a+b;
           
            printf("\nThe sum of %.2lf and %.2lf is %.2lf", a, b, c);
            }
    else if(opera == '-')   
    {
            c=a-b;
            
            printf("\nThe difference between %.2lf and %.2lf is %.2lf", a, b, c);
            }
    else if(opera == '*')
    {
            c=a*b;
            
            printf("\nThe product of %.2lf and %.2lf is %.2lf", a, b, c);
            }
    else if(opera == '/')
    {
            c=a/b;
            
            printf("\n%.2lf divided by %.2lf is %.2lf", a, b, c);
            }
    else
    {
    	printf("Invalid Operator!");
	}
	
	return 0;
	//furqan-116
	
}