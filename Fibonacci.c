#include<stdio.h>
main()
{
	int i,n,t1=0,t2=1,t3;
	
	printf("Enter the number of terms you want to print: ");
	scanf("%d",&n);
	
	printf("\n-------Fibonacci Series-------\n");
	printf("\n%d %d ",t1,t2);
	
	for(i=3;i<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		
	printf("%d ",t3);

	}
	printf("\n\n");
	


}

