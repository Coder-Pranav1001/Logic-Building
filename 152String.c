/*
	Description :- Convert String Lower to Upper
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

void strUprX(char *str)
{
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Please Enter String : \n");
	scanf("%[^'\n']s",Arr);
	
	strUprX(Arr);
	
	printf("String After Conversion : %s\n",Arr);
	
	return 0;
}