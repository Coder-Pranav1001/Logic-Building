/*
	Description :- Summation of Factors from given number
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
// Time Complexity : O(N/2)
int SumFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	printf("Factors are : \n");
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number :\n");
	scanf("%d",&iValue);
	
	iRet = SumFactors(iValue);
	printf("The Summation of Factors is : %d",iRet);
	return 0;
}