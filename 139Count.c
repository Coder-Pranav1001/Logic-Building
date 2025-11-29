/*
	Description :- Count 'a' and 'A' in String
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

int CountCh(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str == 'a') || (*str == 'A'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt++;
}

int main()
{
	char Arr[30];
	int iRet = 0;
	
	printf("please enter your full name :\n");
	scanf("%[^'\n']s",Arr);
	
	iRet = CountCh(Arr);
	printf("Frequency of a is : %d\n",iRet);
	
	return 0;
}