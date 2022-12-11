//Write aa program  to find number is odd or even using ternary operator.

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n%d is Even Number!",num);
	}
	else
	{
		printf("\n%d is Odd number!",num);
	}


}

