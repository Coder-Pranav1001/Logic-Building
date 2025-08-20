/*
	Description :- Accept N numbers from user and Display Even Odd Numbers
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOddCount(int *Arr, int iSize)
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
	printf("Numbers of Even Elements are : %d\n",iEvenCount);
	printf("Numbers of Odd Elements are : %d\n",iSize - iEvenCount);
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
	
	DisplayEvenOddCount(ptr,iLength);
	
	free(ptr);
	
	return 0;
}