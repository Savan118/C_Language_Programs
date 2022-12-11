//Write a program to display your name, age, dob, address.

#include<stdio.h>
main()
{
	char NAME[20], ADD[20];
	int AGE,mm,dd,yyyy;
	
	printf("Enter Your Name:");
	scanf("%s",&NAME);
	
	printf("\nEnter Your DOB(DD/MM/YYYY):");
	scanf("%d/%d/%d",&dd,&mm,&yyyy);
	
	printf("\nEnter Your Age:");
	scanf("%d",&AGE);
	
	printf("\nEnter Your Address:");
	scanf("%s",&ADD);
	
	printf("\n\nHello, %s - Your information is below...\n\n",NAME);
	
	printf("Your Name is: %s\nYour DOB is: %02d/%02d/%04d\nYour Age is:%d\nYour Address is:%s\n",NAME,dd,mm,yyyy,AGE,ADD);
	

	
}

