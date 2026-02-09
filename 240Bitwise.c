 /*
	Description :- ( Masking ) Accept No From user and OFF 4th Bit of that number and return Updated No
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

typedef unsigned int UINT;

// 	0000 	0000 	0000 	0000 	0000 	0000 	0000 	0000
//  1111	1111	1111	1111	1111	1111	1111	0111
//	  F		  F       F       F       F       F       F       7
//	FFFFFFF7
//	0XFFFFFFF7

UINT OFFBit(UINT No)
{
	UINT iMask = 0XFFFFFFF7;
	UINT iAns = 0;
	
	iAns = No & iMask;
	
	return iAns;
}

int main()
{
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&Value);
	
	iRet = OFFBit(Value);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}