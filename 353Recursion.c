/*
	Description :- Accept no from user and return addition of to that number using Recursion 
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int AdditionR(int No)
{
	static int Sum = 0;
	static int iCnt = 1;
	
	while(iCnt <= No)
	{
		Sum = Sum + iCnt;
		iCnt++;
		AdditionR(No);
	}
	return Sum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	iRet = AdditionI(iValue);
	printf("Addition is : %d",iRet);
	
	return 0;
}