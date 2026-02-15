/*
	Description :- Accept no from user And count Digit of that number and addition of those digits
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

int SumDigitR(int No)
{
	static int iSum = 0;
	int Digit = 0;
	
	if(No != 0)
	{
		Digit = No % 10;
		iSum = iSum + Digit;
		No = No / 10;
		SumDigitR(No);
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	iRet = SumDigitR(iValue);
	
	printf("Sum of digits is : %d\n",iRet);
	
	return 0;
}