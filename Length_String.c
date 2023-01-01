//WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	char s[20];
	int i;
	
	printf("Enter the string::");
	gets(s);
	
	for(i=0;s[i]!='\0';i++);
	
	printf("\nLength of String is = %d",i);


}

