#include<stdio.h>
main()
{
	int ch;
	
	printf("\n-------------");
	printf("\n1.Monday");
	printf("\n2.Tuesday");
	printf("\n3.Wednesday");
	printf("\n4.Thursday");
	printf("\n5.Friday");
	printf("\n6.Saturday");
	printf("\n7.Sunday");
	printf("\n-------------");
	
	printf("\nEnter the Choice: ");
	scanf("%d",&ch);
	
	switch(ch){
		case 1:
			printf("\nIt's Monday");
			break;
		case 2:
			printf("\nIt's Tuesday");
			break;
		case 3:
			printf("\nIt's Wednesday");
			break;
		case 4:
			printf("\nIt's Thursday");
			break;
		case 5:
			printf("\nIt's Friday");
			break;
		case 6:
			printf("\nIt's Saturday");
			break;
		case 7:
			printf("\nIt's Sunday");
			break;
		default:
			printf("\nWrong Choice!");
	}

}

