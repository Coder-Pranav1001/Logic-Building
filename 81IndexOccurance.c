/*
	Description :- Check Index Occurance
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int IndexOccurance(int *Arr, int iSize, int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	
	if(iCnt == iSize)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
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
	
	printf("Enter the element to findout the index of first occurance : \n");
	scanf("%d",&iValue);
	
	iRet = IndexOccurance(ptr,iLength,iValue);
	
	if(iRet == -1)
	{
		printf("There is no %d in the Array \n",iValue);
	}
	else
	{
		printf("%d is occured in the array at Index : %d\n",iValue,iRet);
	}
	
	free(ptr);
	
	return 0;
}