/*
	Description :- Accept no from user and return Factorial of to that number using Recursion 
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int Factorial(int No)
{
	static int Sum = 1;
	static int iCnt = 1;
	
	while(iCnt <= No)
	{
		Sum = Sum * iCnt;
		iCnt++;
		Factorial(No);
	}
	return Sum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	iRet = Factorial(iValue);
	printf("Factorial is : %d",iRet);
	
	return 0;
}