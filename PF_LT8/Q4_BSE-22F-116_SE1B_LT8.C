#include<stdio.h>
#include<stdlib.h>
int main()
{
	char email[100];
	int i = 0;
	
	loop:
	printf("\nEnter an email: "); 
	scanf("%s", email);
	
	if (email[0] == '@')
	{
		printf("\nError! The first character of an email  address cannot contain @\n");
		goto loop;
	}
	
	while( email[i] != '\0' ) 
		{
		if( email[i] == '@' )
		{
			printf("\nthe given email address does contain @ character");
			return 0;
		 }
		i++;
		}
		printf("\nthe given email address does not contain @ character");
		
	 return 0;
	 //furqan-116
}