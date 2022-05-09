//printing array elements in reverse order
#include<stdio.h>
int main()
{
	int array[9],i;
	printf("Enter elements into the array \n");
	for(i=0; i<9; i++)
	{
		printf("array[%d]",i);
		scanf("%d",&array[i]);
	}
	//displaying the reverse order
	printf("Elements from the array displayed in reverse order are \n");
	for(i=8; i>=0; i--)
	{
		printf("\narray[%d]",i);
		printf("\n%d",array[i]);

	}
	return 0;
}