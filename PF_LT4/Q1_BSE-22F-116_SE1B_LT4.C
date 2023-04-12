#include<stdio.h>
int main()
{
    float s, t, sp;
    printf("**** Program to Calculate Speed in m/s ****");
    
    printf("\n\n Enter the Distance in Km: ");
    scanf("%f", &s);
    
    printf("\n\n Enter the Time in Hrs: ");
    scanf("%f", &t);
    
    sp = (s/t)/3.6;
    
    printf("%f m/s is the calculated speed.", sp);
    
    return 0;
    
}
