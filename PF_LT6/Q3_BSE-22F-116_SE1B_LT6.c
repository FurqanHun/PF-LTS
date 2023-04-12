#include<stdio.h>
#include<stdlib.h>

int main()
{
	char sel;
	float bal=0, w, d;
	
	do
	{
		system("cls");
		printf("\n\n\t\tTo Add Deposit Press 'D' or 'd'");
		printf("\n\n\t\tTo Withdraw Press 'w' or 'W'");
		printf("\n\n\t\t>> ");
		scanf("%c", &sel);
		if(sel=='D' || sel=='d')
		{
    	printf("\n\n\t\tEnter Amount to Deposit  >> ");
    	scanf("%f", &d);
    	
    	bal += d;
		}
		else if(sel=='W' || sel=='w')
		{
		printf("\n\n\t\tEnter Amount to Withdraw >> ");
    	scanf("%f", &w);
    	
    	bal -= w;
		}
	}
 
	while (bal>-1);
	
	printf("\n\n\nYour account now is %.2f $\n\n\n", bal);
	return 0;

}