/*
	Description :- Convert String Upper to Lower
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strlwrX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		str++;
	}
}
	
int main()
{
	char Arr[20];
	
	printf("Please Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strlwrX(Arr);
	
	printf("String After Conversion : %s\n",Arr);
	
	return 0;
}