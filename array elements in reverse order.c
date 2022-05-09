//printing array elements in reverse order
#include<stdio.h>
int main()
{
	int array[9]={34,56,54,32,67,89,90,32,21};
	int i;
		printf("The original array is");

	for(i=0; i<9; i++)
	{
	
		printf("\n%d",array[i]);
	
	}
	//displaying the reverse order
	printf("\nElements from the array displayed in reverse order are \n");
	for(i=8; i>=0; i--)
	{
	
		printf("\n%d",array[i]);

	}
	return 0;
}