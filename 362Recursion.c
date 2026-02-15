/*
	Description :- Accept String from user and display characters of the string
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

int strlenI(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;
	
	printf("Enter the string\n");
	scanf("%[^'\n's]",Arr);
	
	iRet = strlenI(Arr);
	
	printf("Sring Length is : %d\n",iRet);
	
	return 0;
}