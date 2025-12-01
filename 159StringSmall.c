/*
	Description :- Accept one string from user and convert the string from capital case to small case and copied into another string 
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strcpySmallX(char *src, char *dest)
{
	while(*src != '\0')
	{
		if((*src >= 'A') && (*src <= 'Z'))
		{
			*dest = *src + 32; 
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
	
	strcpySmallX(Arr,Brr);
	
	printf("Your Original String is : %s\n",Arr);
	printf("Your Copied String is : %s\n",Brr);
	
	return 0;
}