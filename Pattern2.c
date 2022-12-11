//WAP to display pattern below
// 	     *
//      ***
//	  *******
//   *********

#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("Enter the number of raw you want:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=i;j<2*i;j++)
		{
			printf("* ");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("* ");	
		}
		
		printf("\n");

	}
		
}

