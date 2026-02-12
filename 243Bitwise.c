/*
	Description :- ( Masking ) Accept no from user and check weather the 21st Bit of that number is ON or OFF
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

// 	0000 	0000 	0000 	0000 	0000 	0000 	0000 	0000
//  0000 	0000 	0001 	0000 	0000 	0000 	0000 	0000
//	  0		  0       1       0       0       0       0       0
//	00100000
//	0X00100000

bool CheckBit(UINT No)
{
	UINT iMask = 0X00100000;
	UINT Result = 0;
	
	Result = No & iMask;
	
	if(No == iMask)
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
	UINT value = 0;
	bool bRet = false;
	
	printf("Enter the number : \n");
	scanf("%d",&value);

	bRet = CheckBit(value);
	
	if(bRet == true)
	{
		printf("21st Bit is On \n");
	}
	else
	{
		printf("21st Bit is Off \n");
	}
	
	return 0;
}