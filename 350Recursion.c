/*
	Description :- Display Pattern using Recursion
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

void DisplayR()
{
	static int iCnt = 1;
	
	if(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR(); // Recursive Call
	}
}

int main()
{
	printf("Inside Main\n");
	
	DisplayR();
	
	printf("End of Main");
	
	return 0;
}