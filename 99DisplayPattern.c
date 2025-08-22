/*
	Description :- Display Pattern
	Author :- Pranav R Sonawane
	Pattern :- 
	Input = 
	Row = 4
	Column = 4
	Output = 
	*	*	*	*
	*	*	*	*
	*	*	*	*
	*	*	*	*
*/
#include<stdio.h>
void Display(int iRow, int iCal) 
{
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow; i++)
	{
		for(j = 1; j <= iCal; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}
int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	
	printf("Enter Numbers of Row : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Numbers of Column : \n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}