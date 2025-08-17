/*
	Description :- Accept the number from user and Check the number is palindrome or not using while loop
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = iNo;
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		iRev = (iRev * 10) + iDigit;
		iNo = iNo / 10;
	}
	
	return (iRev == iTemp);	
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Please enter the number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckPalindrome(iValue);
	
	if(bRet == true)
	{
		printf("%d is a palindrome number\n",iValue);
	}
	else
	{
		printf("%d is not a palindrome number\n",iValue);
	}
	return 0;
}