/*
	Description :- Accept N Numbers from user and find out Largest number from those Numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

int Maximum(int *Arr, int iSize)
{
	int iMax = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iMax < Arr[iCnt])
		{
			iMax = Arr[iCnt];
		}
	}
	return iMax;
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
	
	iRet = Maximum(ptr,iLength);
	printf("Maximum number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}