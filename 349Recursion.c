/*
	Description :- Uncontroled Recursion (Segmentation Fault)
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

void DisplayI()
{
	int iCnt = 1; // auto
	
	while(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
	}
}
 
void DisplayR()
{
	int iCnt = 1; // Uncontroled Recursion
	
	if(iCnt <= 4)
	{
		printf("*\t");
		iCnt++;
		DisplayR(); // Recursive Call
	}
}

int main()
{
	DisplayR();
	
	return 0;
}