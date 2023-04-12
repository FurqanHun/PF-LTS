// SOLUTION 8

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, rows;
    
    loo:
    printf("Enter positive number of rows >> ");
    scanf("%d", &rows);
    
    	if(rows<2)
	{
		goto loo;
	}
    system("cls");

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
    //furqan-116
}