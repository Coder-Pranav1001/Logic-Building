/*
	Description :- Accept one string from user and convert the string from small case to capital case and copied into another string 
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strcpyCapX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'a') && (*src <= 'z'))
		{
			*dest = *src - 32; 
		}
		else
		{
			*dest = *src;
		}
		
		src++;
		dest++;
	}
	*dest = '\0';
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Please Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strcpyCapX(Arr,Brr);
	
	printf("Your Copied String is : %s\n",Brr);
	
	return 0;
}