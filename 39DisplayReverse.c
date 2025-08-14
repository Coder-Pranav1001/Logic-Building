/*
	Description :- Travel the Reverse Loop 
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void DisplayReverse(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo; iCnt > 0; iCnt--)
	{
		printf("%d\t",iCnt);
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	DisplayReverse(iValue);
	return 0;
}