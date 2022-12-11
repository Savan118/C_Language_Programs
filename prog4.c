//Write a program to find out a simple interest.

#include<stdio.h>
main()
{
	int P,R,N;
	float SI;
	
	printf("Enter the Principle Amount you want to find SI of:");
	scanf("%d",&P);
	
	printf("\nEnter the Rate you want:");
	scanf("%d",&R);
	
	printf("\nEnter the duration in year:");
	scanf("%d",&N);
	
	SI = (P*R*N)/100;
	
	printf("\n\nSimple Interest is: %f",SI);



}

