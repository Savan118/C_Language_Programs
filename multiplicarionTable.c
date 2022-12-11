//Program of Multiplication table of the given number by user

#include<stdio.h>
main()
{
	int num,i;
	printf("\nEnter the number you want Multiplication Table of:");
	scanf("\n%d",&num);
	
	printf("\n\nTable of: %d\n",num);
	printf("--------------\n");

	for(i=1;i<=10;i++)
	{
		printf("%d X %d = %d\n",num,i,num*i);
	}
}
