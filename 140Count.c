/*
	Description :- Count small letter in String
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
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
	
	iRet = CountSmall(Arr);
	printf("Frequecy of small letter : %d",iRet);
	
	return 0;
}
