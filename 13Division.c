/*
	Description :- Accept the number from user and check whether it is divisible by 3 or 5
	Author :- Pranav R Sonawane
*/
#include<stdio.h>
#include<stdbool.h>

bool Division(int iNo)
{
	if(iNo % 3 == 0)  
	{
		if(iNo % 5 == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else 
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet = Division(iValue);
	if(bRet == true)
	{
		printf("%d is Divisible by 3 and 5\n",iValue);
	}
	else
	{
		printf("%d is not Divisible by 3 and 5\n",iValue);
	}
	
	return 0;
}