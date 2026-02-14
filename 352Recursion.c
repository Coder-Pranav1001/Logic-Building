/*
	Description :- Accept no from user return addition of to that number with out resursion
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int AdditionI(int No)
{
	int Sum = 0;
	int iCnt = 1;
	
	while(iCnt <= No)
	{
		Sum = Sum + iCnt;
		iCnt++;
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