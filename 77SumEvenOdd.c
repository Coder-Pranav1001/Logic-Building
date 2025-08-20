/*
	Description :- Accept N numbers from user and Display Summation of Even and Odd Elements
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

void SummationEvenOdd(int *Arr, int iSize)
{
	int iCnt = 0;
	int iEvenSum = 0;
	int iOddSum = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iEvenSum = iEvenSum + Arr[iCnt];
		}
		else
		{
			iOddSum = iOddSum + Arr[iCnt];
		}
	}
	printf("Summation of Even Elements are : %d\n",iEvenSum);
	printf("Summation of Odd Elements are : %d\n",iSum);
}

int main()
{
	int *ptr = NULL;
	int iLength =  0;
	int iCnt = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iLength);
	
	ptr =(int *)malloc(iLength * sizeof(int));
	
	printf("Enter the numbers \n");
	
	for(iCnt = 0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	SummationEvenOdd(ptr,iLength);
	
	free(ptr);
	
	return 0;
}