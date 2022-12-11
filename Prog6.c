//Write a program to convert days into years and years into days.

#include<stdio.h>
main()
{

	int years,days,RESULT_YEARS,RESULT_DAYS;
	
	//Convert days into years
	printf("Enter the days:");
	scanf("%d",&days);
	
	RESULT_YEARS = days/365;
	
	printf("\n--------------------------------------\n");
	printf("%d Days is eaquals to %d Years",days,RESULT_YEARS);
	printf("\n--------------------------------------\n");


	//Convert years into days
	
	printf("\nEnter the Years:");
	scanf("%d",&years);
	
	RESULT_DAYS = years*365;
	
	printf("\n--------------------------------------\n");
	printf("%d Years is eaquals to %d Days",years,RESULT_DAYS);
	printf("\n--------------------------------------\n");

}

