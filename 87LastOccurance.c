/*
	Description :- Accept N Numbers from user and find last occurance
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int ChecklastOccurance(int *Arr, int iSize, int iNo)
{
	int iCnt = 0;
	int iPos = -1;
	
	for(iCnt = 0; iCnt < iSize ; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			iPos = iCnt;
		}
	}
	return iPos;
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
	
	printf("Enter the element to findout the last occurance : \n");
	scanf("%d",&iValue);
	
	iRet = ChecklastOccurance(ptr,iLength,iValue);
	
	if(iRet == -1)
	{
		printf("There is no %d in the Array \n",iValue);
	}
	else
	{
		printf("%d is occured in the array at last Index : %d\n",iValue,iRet);
	}
	
	free(ptr);
	
	return 0;
}