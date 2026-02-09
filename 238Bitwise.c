/*
	Description :- ( Masking ) Accept no from user and check weather the 22nd Bit of that number is ON or OFF
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

//  22nd Bit
// 	0000 	0000 	0000 	0000 	0000 	0000 	0000 	0000
// 	0000 	0000 	0010 	0000 	0000 	0000 	0000 	0000
//    0		  0		  2	      0       0       0       0       0
//	00200000
//  0X00200000

bool CheckBit(UINT No)
{
	UINT iMask = 0X00200000;
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
		printf("22nd Bit is ON\n");
	}
	else
	{
		printf("22nd Bit is OFF\n");
	}
	
	return 0;
}