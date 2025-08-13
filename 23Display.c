/*
	Description :- Demonstration of iteration using for loop
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	for(iCnt = 1; iCnt<=iValue; iCnt++)
	{
		printf("Pranav : %d\n",iCnt);
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}
