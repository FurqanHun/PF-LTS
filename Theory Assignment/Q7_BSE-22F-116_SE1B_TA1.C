// SOLUTION #7

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, t1=0, t2=1, t3 = t1 + t2;
	
	loo:
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	if(n<0)
	{
		goto loo;
	}
	system("cls");
	printf("%d, %d,", t1, t2);
	
	for(i=3; i<=n; i++)
	{
		printf(" %d,", t3);
		t1 = t2;
		t2 = t3;
		t3 = t1+t2;
	}
	printf("...");
	
	return 0;
	//furqan-116
}