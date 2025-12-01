/*
	Description :- Copy String from One String into Another String
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strcpyX(char *src, char *dest)
{
	while(*src != '\0')
	{
		*dest = *src; 
		
		src++;
		dest++;
	}
	*dest = *src;
}

int main()
{
	char Arr[20];
	char Brr[20];
	
	printf("Please Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strcpyX(Arr,Brr);
	
	printf("Your Original String is : %s\n",Arr);
	printf("Your Copied String is : %s\n",Brr);
	
	return 0;
}