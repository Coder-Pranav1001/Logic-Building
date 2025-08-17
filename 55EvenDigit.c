/*
	Description :- Accept the number from user and count even digit from that number 
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int CountEvenDigits(int iNo)
{
	int iDigit = 0;
	int iEvenCnt = 0;
	
	if(iNo == 0) // Filter
	{
		return 1;
	}
	
	while(iNo != 0) 
	{
		iDigit = iNo % 10;
		if((iDigit % 2) == 0)
		{
			iEvenCnt++;
		}
		iNo = iNo / 10;
	}
	return iEvenCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = CountEvenDigits(iValue);
	printf("Count of Even Digits are : %d\n",iRet);
	
	return 0;
}