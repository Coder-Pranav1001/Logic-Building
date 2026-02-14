/*
	Description :- Accept no from user and return Factors of to that number using resursion
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

void FactorsR(int No)
{
	static int iCnt = 1;
	
	if(iCnt <= (No/2))
	{
		if((No % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
	iCnt++;
	FactorsR(No);
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	FactorsR(iValue);
	
	return 0;
}