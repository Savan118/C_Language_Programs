//WAP to find out Factorial of given number.

#include<stdio.h>
main()
{
	int i,n,FACT=1;
	
	printf("Enter the number you want to Factorial of: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		FACT = FACT*i;
	}
	printf("Factorial is: %d",FACT);
	



}

