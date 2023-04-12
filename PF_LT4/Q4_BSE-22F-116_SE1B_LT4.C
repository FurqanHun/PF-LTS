#include<stdio.h>
#include<math.h>
int main()
{
    float vol_sp, r;
    
    printf("Enter the radius of a sphere: ");
    scanf("%f", &r);
    
    vol_sp = 1.333 * 3.142 * pow(r,3);
    
    printf("The volume of the given sphere is %.2f", vol_sp);
    
    return 0;
    
}
    
