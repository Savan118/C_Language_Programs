//Write a program to swaping two numbers withot using third variable.

#include<stdio.h>
main()
{
	int A,B;
	printf("Enter the Value of A:");
	scanf("%d",&A);
	
	printf("\nEnter the value of B:");
	scanf("%d",&B);
	
	//swap numbers
	A=A+B;
	B=A-B;
	A=A-B;
	
	printf("\n-----After Swap-----\n");
	printf("\nNew value of A: %d",A);
	printf("\nNew value of B: %d",B);
}

