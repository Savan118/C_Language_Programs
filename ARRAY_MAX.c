#include <stdio.h>
int findMax(int[],int);
main()

{

    int a[10],a_size,L_Num,i;
    printf("Enter size of array(1 to 10):");
    scanf("%d",&a_size);

    for(i=0;i<a_size;i++)
    {
    	printf("\nEnter the elements %d :: ",i+1);
        scanf("%d",&a[i]);
	}

    L_Num=findMax(a,a_size);
	printf("\n\nMaximum number is: %d ",L_Num);

}

int findMax(int a[],int a_size)

{
    int i,Large_num;
    Large_num=a[0];

    for(i=1;i<a_size;i++)
    {
        if(Large_num<a[i])
        Large_num=a[i];
    }

    return Large_num;

}
