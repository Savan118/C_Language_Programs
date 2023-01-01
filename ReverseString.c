//WAP to to reverse string using recursion

#include<stdio.h>
void reverseString();
main()
{
	int str1;
	printf("Enter the String:");
	reverseString(); // called a function

}

reverseString()  //Function for Reverse of string
{
	int str2;
	scanf("%c",&str2);
	
	if(str2!='\n')
	{
		reverseString(); //calle a function until get the null character
		printf("%c",str2);
	}
	
}

