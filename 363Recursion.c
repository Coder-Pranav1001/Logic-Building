/*
	Description :- Accept String from user and display characters of the string using Recursion
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

int strlenR(char *str)
{
	static int iCnt = 0;
	
	if(*str != '\0')
	{
		iCnt++;
		str++;
		strlenR(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n's]",Arr);
	
	iRet = strlenR(Arr);
	
	printf("Sring Length is : %d\n",iRet);
	
	return 0;
}