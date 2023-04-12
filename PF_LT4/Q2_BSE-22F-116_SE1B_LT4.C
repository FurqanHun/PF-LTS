#include<stdio.h>
int main()
{
    float a, b, c, sum;
    
    printf("Enter first number: ");
    scanf("%f", &a);
    
    printf("Enter second number: ");
    scanf("%f", &b);
    
    printf("Enter third number: ");
    scanf("%f", &c);
    
    sum = a+b+c;
    
    printf("\n\nThe sum of %.2f and %.2f and %.2f is %.2f", a, b, c, sum);
    
    return 0;
    
}
    
    
