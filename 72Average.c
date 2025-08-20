/*
	Description :- Accept N numbers from user and return the average of that N numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)
float Average(int Arr[], int iSize)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++) 
	{
		iSum = iSum + Arr[iCnt];	
	}
	
	return (iSum / iSize);
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	float fRet = 0.0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(iLength * sizeof(int));
	//	ptr = (int *)malloc(iLength * 4);
	
	printf("Please enter the number : \n");
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	fRet = Average(ptr, iLength);
	printf("Average is : %f",fRet);
	
	free(ptr);
	 
	return 0;
}