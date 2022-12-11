//Write a program to find character is vowel or consonant.

#include<stdio.h>
main()
{
	char ch;
	printf("Enter the Alphabate(A-Z): ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
	{
			switch(ch)
			{
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf("\n%c is Vowel.\n",ch);
					break;
				default:
					printf("\n%c is Consonant.\n",ch);
				
			}
	}
	else
	{
		printf("\n%c is not an alphabate.");
	}



}

