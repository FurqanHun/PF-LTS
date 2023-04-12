// SOLUTION #6
 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
  {
      int b, n, i, r, digit, p, count=0;
      char a[100];
      char sel;
    
    re:
    printf("\n\n\t\tTo convert into Hexadecimal Enter 'H'");
    printf("\n\n\t\tTo convert into Octal Enter 'O'");
    printf("\n\n\t\tTo convert into Binary Enter 'B'");
    printf("\n\n\t\tTo exit Enter 'E'");
    
    loo:
    printf("\n\n\t\t>> ");
    scanf("%c", &sel);
    
    switch (sel)
    {
    case 'H':
    case 'h':
    
          system("cls"); 
          b=16;
          break;
        
    case 'O':
    case 'o':
      
      	system("cls");
      	b=8;
	     break;

	case 'B':
	case 'b':

	  	system("cls");
	  	b=2;
	  break;

	case 'E':
	case 'e':
	

	  	return 0;

	  default:
	  	 goto loo;
    }
   
    printf("Enter a decimal number:");
    scanf("%d", &n);
	  
	 p = n;
      
    do
    {
        r = p%b;
        digit = '0'+r;
        if(digit>'9')
            digit += 7;
        a[count] = digit;
        count++;
        p /= b;
         }
	
	while(p!=0);
	printf("\nbase %d equivalent of num %d is ", b, n);
      for(i=count-1;i>=0;--i)
	  printf("%c",a[i]);
	  count=0;

	  goto re;
    
    return 0;
  }