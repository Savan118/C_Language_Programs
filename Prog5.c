//Write a program to check the given year is Leap year or not.

#include<stdio.h>
main()
{
	int year;
	
	printf("Enter the year: ");
	scanf("%d",&year);
	
	if(year%4==0 && year%400==0){
		printf("%d is a leap year...",year);
	}

	else{
		printf("%d is not a leap year...",year);
	}

}

