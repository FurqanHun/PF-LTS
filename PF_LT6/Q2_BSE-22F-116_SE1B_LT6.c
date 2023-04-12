#include <stdio.h>

int main()
{
    float burn_calorie;
    int i;

    for(i=10;i<=30;i+=5)
	{
		burn_calorie = i*3.9;
        printf("Calorie burn after %d minutes is %.1f calories\n",i,burn_calorie);
    }
    
    return 0;
}