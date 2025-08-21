/*
	Description :- Accept N Numbers from user and Display Reverse order
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int *Arr, int iSize)
{
	int iCnt = 0;
	
	for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
	{
		printf("%d\n",Arr[iCnt]);
	}
}
 
int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iLength);
	
	ptr =(int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements : \n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Element in Reverse Order : \n");
	DisplayReverse(ptr,iLength);
	
	free(ptr);
	
	return 0;
}