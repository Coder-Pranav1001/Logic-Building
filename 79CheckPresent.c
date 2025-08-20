/*
	Description :- CheckOccurance Number is present or not
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckOccurance(int *Arr, int iSize, int iNo)
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
	if(iFrequency == 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *ptr = NULL;
	int iLength = 0;
	int iValue = 0;
	int iCnt = 0;
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&iLength);
	
	ptr =(int *)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers \n");
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the element to findout the occurance : \n");
	scanf("%d",&iValue);
	
	bRet = CheckOccurance(ptr,iLength,iValue);
	
	if(bRet == true)
	{
		printf("%d is occured in the array\n",iValue);
	}
	else
	{
		printf("there is no %d in the array\n",iValue);
	}
	
	free(ptr);
	
	return 0;
}