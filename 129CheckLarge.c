/*
	Description :- Check Character is Capital or Not using Alphabate
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdbool.h>

bool IsCaptalX(char ch)
{
	if((ch >= 65) && (ch <= 90))
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
	char cValue = '\0';
	bool bRet = false;
	
	printf("Please enter one character : \n");
	scanf("%c",&cValue);
	
	bRet = IsCaptalX(cValue);
	if(bRet == true)
	{
		printf("%c is a capital case latter",cValue);
	}
	else
	{
		printf("%c is not a capital case latter",cValue);
	}
	
	return 0;
}