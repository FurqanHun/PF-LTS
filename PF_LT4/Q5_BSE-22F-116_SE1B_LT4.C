#include<stdio.h>
int main()
{
    float num, perc;
    
    printf("Enter your Quiz#1 marks out of 5: ");
    scanf("%f", &num);
    if(num>=0 && num<=5)
    {
              perc = (num/5) * 100;
              printf("The percentage marks of %.2f is %.2f%%", num, perc);
              }
    else
    {
        printf("The marks should be from 1 to 5!!");  
        
        }
        return 0;
}
