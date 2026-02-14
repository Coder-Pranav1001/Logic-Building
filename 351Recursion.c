/*
	Description :- Accept no from user and Display Pattern using Recursion
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

void DisplayR(int No)
{
	static int iCnt = 1;
	
	if(iCnt <= No)
	{
		printf("*\t");
		iCnt++;
		DisplayR(No); // Recursive Call
	}
}

int main()
{
	int iValue = 0;
	printf("Enter the Main : \n");
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);

	DisplayR(iValue);
	
	printf("\nEnd of Main\n");
	
	return 0;
}