//WAP to printf factorial of number using recursion

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter the number you want factorial of::");
	scanf("%d",&num);

	printf("\n\nFactorial of %d is:: %d",num,myFactorial(num));
		
//	if(n!=0)
//	{
//		for(i=1;i<=n;i++)
//		{
//			FACT=FACT*i;
//		}
//		printf("Factorial is::%d",FACT);
//	}
//	

}

myFactorial(int num)  //function 
{
	if(num==1 || num==0){
		return 1;
	}
	else
	{
		return(num * myFactorial(num-1));  //fuction called itself
	}
}

