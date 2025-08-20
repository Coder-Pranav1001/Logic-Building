/*
	Description :- Code Template
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
//____ ________(int *Arr, int iSize)
____ ________(int Arr[], int iSize)
{
	// Logic
}

int main()
{
	int *ptr = NULL;
	int iLength =  0;
	int iCnt = 0;
	int iRet = 0;
	
	// Step 1 : Accept size of array
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	// Step 2 : Allocate memory for array
	ptr =(int *)malloc(iLength * sizeof(int))
	
	// Step 3 : Accept the elements of array
	printf("Enter the numbers \n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	// Step 4 : Call the function
	____ = _______(ptr,iLength);
	
	// Strp 6 : Deallocate the memory
	free(ptr);
	
	return 0;
}