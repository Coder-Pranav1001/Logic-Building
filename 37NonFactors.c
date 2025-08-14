/*
	Description :- Display Summation of Non Factors from given number
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int SumNonFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	printf("Non Factors of %d are :\n",iNo);
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo%iCnt) != 0)
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
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	iRet = SumNonFactors(iValue);
	
	printf("Addition of Non Factors of %d is : %d",iValue,iRet);
	return 0;
}