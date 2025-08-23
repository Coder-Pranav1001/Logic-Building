/*
	Description :- Template of Pattern Printing
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
void Display(int iRow, int iCol)
{
	int i = 0;
	int j = 0;
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			// Logic
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter The Value of Rows : \n");
	scanf("%d",&iValue1);
	
	printf("Enter The Value of Columns : \n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	return 0;
}