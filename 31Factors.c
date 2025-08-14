/*
	Description :- Display Factors from given number
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
// Time Complexity : O(N)
void DisplayFactors(int iNo)
{
	int iCnt = 0;
	
	printf("Factors are : \n");
	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	DisplayFactors(iValue);
	
	return 0;
}