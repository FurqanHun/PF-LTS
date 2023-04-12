#include <stdio.h>

int main()
{
    int bill=0, c_pay=0, change;
    int Notes_1000,Notes_500,Notes_100,Notes_50,Notes_10,Notes_5,Notes_2,Notes_1 =0;
    
    printf("Total Bill: ");
    scanf("%d",&bill);
    
    printf("Customer pays: ");
    scanf("%d",&c_pay);
    
    change = c_pay - bill;
    
    Notes_1000 = change / 1000;
    change = change%1000;
    
    Notes_500 = change/500 ;
    change = change%500;

    Notes_100 = change/100;
    change = change%100;

    Notes_50 = change/50;
    change = change%50;
    
    Notes_10 = change/10;
    change = change%10;
    
    Notes_5 = change/5;
    change = change%5;

    Notes_2 = change/2;
    change = change%2;
    
    Notes_1 = change/1;
    change = change%1;
    
	printf("\n");
	printf("Rs.1 Notes: %d\n",Notes_1);
    printf("Rs.2 Notes: %d\n",Notes_2);
    printf("Rs.5 Notes: %d\n",Notes_5);
    printf("Rs.10 Notes: %d\n",Notes_10);
    printf("Rs.50 Notes: %d\n",Notes_50);
    printf("Rs.100 Notes: %d\n",Notes_100);
    printf("Rs.500 Notes: %d\n",Notes_500);
    printf("Rs.1000 Notes: %d\n",Notes_1000);
    
    return 0;
}