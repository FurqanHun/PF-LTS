#include <stdio.h>
#include<stdlib.h>
int main(){
	int i, j, a, n=10, sum;
	double number[10];
	
	printf("Enter ten numbers \n");
	
	for (i = 0; i < n; ++i)
		scanf("%lf", &number[i]);
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

	
	printf("\nMaximum number is %lf", number[9]);
	printf("\nMinimum number is %lf", number[0]);
	
	return 0;
	//furqan-116
}