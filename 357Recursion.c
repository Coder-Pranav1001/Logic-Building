/*
	Description :- Accept no from user and return Summetion of Factors using resursion
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int SumFactorsR(int No)
{
	static int iCnt = 1;
	static int iSum = 0;
	
	if(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			iSum = iSum + iCnt;
		}
		iCnt++;
		SumFactorsR(No);
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	iRet = SumFactorsR(iValue);
	printf("Summetion of all factors is : %d\n",iRet);
	
	return 0;
}