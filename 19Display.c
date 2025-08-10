/*
	Description :- Demonstration of iteration using while loop
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void Display(int iValue)
{
	int iCnt = 0;
	
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("JayGanesh\n");
		iCnt++;
	}
}

int main()
{
	int iNo = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}