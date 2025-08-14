/*
	Description :- Display Factors from given number
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
// Time Complexity : O(N/2)
void Factors(int iNo)
{
	int iCnt = 0;
	printf("Factors are : \n");
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
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
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	Factors(iValue);
	return 0;
}