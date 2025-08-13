/*
	Description :- Accept the number from user and Summation of 1 to that number using for loop
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int Summation(int iNo)
{
	int iSum = 0;
	int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;	
	
	printf("Enter the Value \n");
	scanf("%d",&iValue);
	
	iRet = Summation(iValue);
	
	printf("Summation is : %d",iRet);
	return 0;
}