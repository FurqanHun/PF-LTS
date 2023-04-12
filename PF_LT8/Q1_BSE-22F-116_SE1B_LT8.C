#include <stdio.h>
#include<stdlib.h>
int main(){
	int i, j, a, n=10, number[10], sum;
	float median;
	
	printf("Enter ten numbers \n");
	
	for (i = 0; i < n; ++i)
		scanf("%d", &number[i]);
	for (i = 0; i < n; ++i){
				for (j = i + 1; j < n; ++j){
					if (number[i] > number[j]){
						a =  number[i];
						number[i] = number[j];
						number[j] = a;
						}
						}
						}
	system("cls");
	printf("The numbers arranged in ascending order are: \n");

        for (i = 0; i < n; ++i)
		printf("%d\n", number[i]);
		
		sum=(number[4] + number[5]);
		median=(float)sum/2;
		printf("\nmedian is %.1f", median);
		
		return 0;
		//furqan-116
    }