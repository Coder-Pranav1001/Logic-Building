/*
	Description :- ( Masking ) Accept no from user and check weather the 4th Bit of that number is ON or OFF
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
	UINT iMask = 8;
	UINT Result = 0;
	
	Result = No & iMask;
	
	if(Result == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	UINT Value = 0;
	bool bRet = false;
	
	printf("Enter the Number : \n");
	scanf("%d",&Value);
	
	bRet = CheckBit(Value);
	
	if(bRet == true)
	{
		printf("4th Bit is ON\n");
	}
	else
	{
		printf("4th Bit is OFF\n");
	}
	
	return 0;
}