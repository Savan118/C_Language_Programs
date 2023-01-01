//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int i,j,a[2][2],b[2][2];
	int SUM_RESULT[2][2];
	int SUB_RESULT[2][2];
	int MUL_RESULT[2][2];


	//input for 1st matrix
	printf("Enter the element of 1st matrix::\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter A %d %d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	//input for 2nd matrix
	
	printf("Enter the element of 2nd matrix::\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter B %d %d: ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	
	//storing the result
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			SUM_RESULT[i][j] = a[i][j] + b[i][j];
			SUB_RESULT[i][j] = a[i][j] - b[i][j];
			MUL_RESULT[i][j] = a[i][j] * b[i][j];
		}
	}

	//Display the result
	
	printf("The Result is below\n\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Sum of %d + %d = %d\t",a[i][j],b[i][j],SUM_RESULT[i][j]);
			printf("Sub of %d - %d = %d\t",a[i][j],b[i][j],SUB_RESULT[i][j]);
			printf("Mul of %d * %d = %d\t",a[i][j],b[i][j],MUL_RESULT[i][j]);
			
			if(j==1)
				printf("\n");
		}
	}


}

