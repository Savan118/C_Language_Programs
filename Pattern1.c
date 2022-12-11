//WAP to diplay the pattern below
//	1
//	2 3
//	4 5 6
//	7 8 9 10
//	11 12 13 14 15

#include<stdio.h>
main()
{
	int i,j,n;
	int num=1;
	printf("Enter the no of row you want to print: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		
	printf("\n");

	}


}

