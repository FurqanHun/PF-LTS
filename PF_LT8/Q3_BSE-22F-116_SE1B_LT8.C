#include<stdio.h>
#include<stdlib.h>
int main()
{
	char alphabet[100];
	int i = 0;
	
	printf("Enter a string: "); 
	gets(alphabet);
	
	while( alphabet[i] != '\0' ) 
	{
		if( alphabet[i] >= 'a' && alphabet[i] <= 'z' )
		{
		alphabet[i] = alphabet[i] - 32;
		}
		i++;
		}
		system("cls");
		
		puts(alphabet);
		return 0;
		//furqan-116
}