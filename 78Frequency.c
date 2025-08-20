/*
	Description :- Calculate Frequency of specific number
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

int CalculateFrequency(int *Arr, int iSize, int iNo)
{
	int iCnt = 0;
	int iFrequency = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iFrequency++;
		}
	}
	return iFrequency;
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iValue = 0;
	int iCnt = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iLength);
	
	ptr =(int *)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers \n");
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the number to findout the frequency : \n");
	scanf("%d",&iValue);
	
	iRet = CalculateFrequency(ptr,iLength,iValue);
	
	printf("Frequency of %d is %d\n",iValue,iRet);
	
	free(ptr);
	
	return 0;
}