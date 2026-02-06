/*
	Description :- Accept no from user and count no of Bits which are on in that number
	Author :- Pranav R Sonawane
*/ 

#include<stdio.h>

int CountOnBits(unsigned int no)
{
	int iCnt = 0;
	int Digit = 0;
	
	while(no != 0)
	{
		Digit = no % 2;
		if(Digit == 1)
		{
			iCnt++;
		}
		no = no / 2;
	}
	return iCnt;
}

int main()
{
	unsigned int Value = 0;
	int Ret = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&Value);
	
	Ret = CountOnBits(Value);
	printf("Number of bits which are ON are : %d\n",Ret);
	
	return 0;
}