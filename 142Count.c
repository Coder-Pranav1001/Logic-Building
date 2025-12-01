/*
	Description :- Calculate friquency of a in string
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
	int iRet = 0;
	
	printf("please enter your full name : \n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountFrequency(Arr,'a');
	
	printf("Frequecy of letter : %d",iRet);
	
	return 0;
}
