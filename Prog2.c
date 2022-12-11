//Write a program of simple calculator.

#include<stdio.h>
main()
{
	int num1, num2, ch;
	
	printf("Enter value of Num1:");
	scanf("%d",&num1);

	printf("\nEnter value of Num2:");
	scanf("%d",&num2);
	printf("\n1. +\n2. -\n3. *\n4. /");
	
	printf("\nEnter your Choice: ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("Ans is = %d",num1+num2);
			break;		
		case 2:
			printf("Ans is = %d",num1-num2);
			break;
		case 3:
			printf("Ans is = %d",num1*num2);
			break;
		case 4:
			printf("Ans is = %d",num1/num2);
			break;
		default:
			printf("Operator not matched!");
			
	}


}

