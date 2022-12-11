//WAP to diplay the pattern below
//	1
//	1 0
//	1 0 1
//	1 0 1 0 
//	1 0 1 0 1 

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
			printf("%d ",j%2);
			
		}
		printf("\n");
	}


}

