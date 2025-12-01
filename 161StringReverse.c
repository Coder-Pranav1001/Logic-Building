/*
	Description :- Accept one string from user and Reverse that String (Swaping)
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strrevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp = '\0'; 
	 
	while(*end != '\0')
	{
		end++;
	}
	end--; 
	 
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
}

int main()
{
	char Arr[20];
	
	printf("Please Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strrevX(Arr);
	
	printf("Reverse is string is : %s\n",Arr);
	
	return 0;
}