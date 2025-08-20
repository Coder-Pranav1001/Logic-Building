/*
	Description :- Accept N numbers from user and Check Even Numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation on array
int CountEven(int *Arr, int iSize)
{
	int iCnt = 0;
	int iEvenCount = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEvenCount++;
		}
	}
	return iEvenCount;
}

int main()
{
	int *ptr = NULL;
	int iLength =  0;
	int iCnt = 0;
	int iRet = 0;
	
	// Step 1 : Accept size of array
	printf("Enter the number : \n");
	scanf("%d",&iLength);
	
	// Step 2 : Allocate memory for array
	ptr =(int *)malloc(iLength * sizeof(int));
	
	// Step 3 : Accept the elements of array
	printf("Enter the numbers \n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	// Step 4 : Call the function
	iRet = CountEven(ptr,iLength);
	
	printf("Number of even elements are : %d\n",iRet);
	
	// Strp 6 : Deallocate the memory
	free(ptr);
	
	return 0;
}