/*
	Description :- Display Pattern
	Author :- Pranav R Sonawane
	Pattern :- 
	Input = 
	Row = 4
	Column = 4
	Output = 
	*	*	*	*
	2	2	2	2
	*	*	*	*	
	4	4	4	4	
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
			if((i % 2) == 0)
			{
				printf("%d\t",i);
			}
			else
			{
				printf("*\t");
			}
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
	
	printf("Your Pattern Is :\n");
	Display(iValue1,iValue2);
	return 0;
}