/*
	Description :- ASCII Table
	Author :- Pranav R Sonawane
*/
#include<stdio.h>

int main()
{
	printf("____________________________________________________________\n");
	printf("ASCII Table\n");
	printf("____________________________________________________________\n");
	
	printf("Dec     | Hex   | Octal |Character|\n");
	
	for(int i = 0; i <= 127; i++)
	{
		printf("%d \t| %x \t| %o\t|%c \t  |\n",i,i,i,i);
	}
	printf("____________________________________________________________\n");
	
	return 0;
} 