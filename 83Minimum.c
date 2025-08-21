/*
	Description :- Accept N Numbers from user and find out Largest number from those Numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

int Minimum(int *Arr, int iSize)
{
	int iMin = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number of elements : \n");
	scanf("%d",&iLength);
	
	ptr =(int *)malloc(iLength * sizeof(int));
	
	printf("Enter the elements : \n");
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet = Minimum(ptr,iLength);
	printf("Minimum number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}