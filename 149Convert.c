/*
	Description :- Convert Character Upper Case to Small Case  
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
 
 char ToUpperX(char ch)
 {
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return ch + 32; // 32 is Different of ASCII Small and Capical
	}
	else
	{
		return ch;
	}
 }
 
 int main()
 {
	char cValue = '0';
	char cRet = '\0';
	
	printf("Enter the character : \n");
	scanf("%c",&cValue);
	
	cRet = ToUpperX(cValue);
	printf("Character in the lower case is : %c\n",cRet);
	
	return 0;
 }