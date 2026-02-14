/*
	Description :- Display * 4 Times 
	Author :- Pranav R Sonawane
*/ 
//	*	*	*	*

#include<stdio.h>

void Display()
{
	int iCnt = 1;
	
	while(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
	}
}

int main()
{
	Display();
	
	return 0;
}