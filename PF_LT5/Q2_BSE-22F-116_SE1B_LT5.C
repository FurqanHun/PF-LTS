#include<stdio.h>
main()
{
    int num;
   
    printf("Enter your numbers: ");
    scanf("%d",&num);
    
    printf("\n");
    
    if(num>=50 && num<=60)
    {
        printf("your grade is D");
    }
    else if(num>=61 && num<=70)
    {
        printf("your grade is C");
    }
    else if(num>=71 && num<=80)
    {
        printf("your grade is B");
    }
    else if(num>=81 && num<=90)
    {
        printf("your grade is A");
    }
    else if(num>=91 && num<=100)
    {
        printf("your grade is A+");
    }
    else
    {
        printf("your grade is F");
    }
    
    return 0;
    //furqan-116

}