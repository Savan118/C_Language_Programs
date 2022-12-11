//WAP to diplay the pattern below
//	A
//	B C
//	D E F
//	G H I J
//	K L M N O

#include<stdio.h>
main()
{
	int i,j,n;
	char CHAR = 'A';
	printf("Enter the no of row you want to print: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",CHAR);
			CHAR++;
		
		}
		
	printf("\n");

	}


}

