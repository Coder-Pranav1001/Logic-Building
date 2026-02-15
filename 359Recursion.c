/*
	Description :- Accept no from user And count number of digits from that number
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int CountDigit(int No)
{
	int iCnt = 0;
	
	while(No != 0)
	{
		iCnt++;
		No = No / 10;
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
	
	printf("Number of digits are : %d\n",iRet);
	
	return 0;
}