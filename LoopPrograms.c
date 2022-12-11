//WAP to take No of Input from user and find out...
//How many Even numbers are there.
//How many odd numbers are there.
//Sum of even numbers.
//Sum of odd numbers.

#include<stdio.h>
main()
{
	int a[10],n;
	int i,sum=0,odd=0,even=0;
	int SUM_ODD=0, SUM_EVEN=0;

	printf("\nEnter the number of elements: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\nNumbers-%d:: ",i+1);
		scanf("%d",&a[i]);
		
		if(a[i]%2==0)
		{
			even++; // how many even numbers 
			SUM_EVEN +=a[i]; // sum of even numbers
		}
		else
		{
			odd++;  // how many odd numbers
			SUM_ODD+=a[i]; // sum of odd numbers
		}
	}
	printf("\nSum of Even number = %d\nSum of Odd number = %d\n",SUM_EVEN,SUM_ODD);
	printf("\nTotal Even number is = %d",even);
	printf("\nTotal Odd number is = %d",odd);


}

