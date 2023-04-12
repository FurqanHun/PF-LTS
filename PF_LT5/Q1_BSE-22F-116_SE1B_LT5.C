#include <stdio.h>
bool LeapYear(int given_year)
{
		if(given_year % 4 == 0)
		return true;
		
		else
		return false;
	}


int main()
{  
    int given_year, age;  
  
    printf("Enter your birth year: ");  
    scanf("%d", &given_year);  
   
    if( LeapYear(given_year) )  
    {  
        printf("\n%d is a leap year\n", given_year);  
    }  
    else  
    {  
        age = 2022 - given_year;
		printf("\nyou are %d years old\n", age);  
    }  
  
    return 0;
    //furqan-116
}  