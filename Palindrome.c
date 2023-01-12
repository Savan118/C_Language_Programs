#include<stdio.h>
main()
{
	char str1[20];
	int i,length;
	int FLAG = 0;

	printf("Enter the String: ");
	gets(str1);
	
	length = strlen(str1);
	
	for(i=0;i<length;i++){
		if(str1[i] != str1[length-i-1])
		{
			FLAG = 1;
			break;
		}
	}

	if(FLAG)
	{
		printf("%s is not a palindrome",str1);
	}
	else
	{
		printf("%s is as palindrome",str1);		
	}

}

