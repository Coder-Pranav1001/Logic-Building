/*
	Description :- Toggle 
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
 
 char CharToggleX(char ch)
 {
	if((ch >= 'A') && (ch <= 'Z'))
	{
		return ch + 32; // 32 is Different of ASCII Small and Capical
	}
	else if((ch >= 'a') && (ch <= 'z'))
	{
		return ch - 32; // 32 is Different of ASCII Small and Capical
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
	
	cRet = CharToggleX(cValue);
	printf("%c Toggle Character is : %c\n",cValue,cRet);
	
	return 0;
 }