/*
	Description :- Filter
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int CountDigit(int iNo)
{
	int iDigit = 0;
	int iCnt = 0;
	
	if(iNo == 0) // Filter
	{
		return 1;
	}
	
	if(iNo < 0) // Updater
	{
		iNo = -iNo; 
	}
	
	while(iNo > 0) // its works on positive number
	{
		iDigit = iNo % 10;
		iNo = iNo / 10;
		iCnt++;
	}
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDigit(iValue);
	printf("Number of Digits are : %d\n",iRet);
	
	return 0;
}