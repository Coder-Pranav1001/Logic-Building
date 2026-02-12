 /*
	Description :- ( Masking ) Accept No From user and Toggle 4th Bit of that number and return Updated No
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

typedef unsigned int UINT;
 
// 	0000 	0000 	0000 	0000 	0000 	0000 	0000 	0000
//  0000 	0000 	0000 	0000 	0000 	0000 	0000 	1000
//	  0		  0       0       0       0       0       0       8
//	00000008
//	0X00000008

UINT ToggleBit(UINT No)
{
	UINT iMask = 0X00000008;
	UINT iAns = 0;
	
	iAns = No ^ iMask;
	
	return iAns;
}

int main()
{
	UINT Value = 0;
	UINT iRet = 0;
	
	printf("Enter the Number : \n");
	scanf("%d",&Value);
	
	iRet = ToggleBit(Value);
	
	printf("Updated number is : %d\n",iRet);
	
	return 0;
}