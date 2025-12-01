/*
	Description :- Calculate friquency of character in string
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int CountFrequency(char *str, char ch)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == ch) 
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	char cValue = '\0';
	int iRet = 0;
	
	printf("please enter string : \n");
	scanf("%[^'\n']s",Arr);
	
	printf("please Enter the character : \n");
	scanf("%c",&cValue);
	
	iRet = CountFrequency(Arr,cValue);
	printf("Frequecy of letter : %d",iRet);
	
	return 0;
}
