/*
	Description :- Accept String from user and display count of small characters of the string 
	Author :- Pranav R Sonawane
*/ 
#include<stdio.h>

int CountCapital(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
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
	
	printf("Enter the string\n");
	scanf("%[^'\n's]",Arr);
	
	iRet = CountCapital(Arr);
	
	printf("small Charater is : %d\n",iRet);
	
	return 0;
}